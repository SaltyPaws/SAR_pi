##---------------------------------------------------------------------------
## Author:      SaltyPaws aka. Walbert Schulpen
## Copyright:
## License:     wxWidgets License
##---------------------------------------------------------------------------


# define minimum cmake version
CMAKE_MINIMUM_REQUIRED(VERSION 2.6.2)

PROJECT(SAR_pi)

SET(PACKAGE_NAME sar_pi)
SET(VERBOSE_NAME SAR)
SET(TITLE_NAME SAR)
SET(CPACK_PACKAGE_CONTACT "SaltyPaws")

SET(VERSION_MAJOR "2")
SET(VERSION_MINOR "2")

SET(NAME_SUFFIX "ov50")
SET(CMAKE_CXX_STANDARD 11)

#SET(CMAKE_BUILD_TYPE Debug)


# Definitions
add_definitions (
-D_FILE_OFFSET_BITS=64
-D_LARGEFILE_SOURCE
-DLIBUNRAR_BUILD
-DRARDLL
-DUNRAR
-DSILENT
)

OPTION(SAR_USE_SVG "Use SVG graphics" ON)

INCLUDE("cmake/PluginConfigure.cmake")

IF(SAR_USE_SVG)
  ADD_DEFINITIONS(-DSAR_USE_SVG)
ENDIF(SAR_USE_SVG)

SET(SRC_SAR
		src/SAR_pi.h
        src/SAR_pi.cpp
        src/icons.h
        src/icons.cpp         
	    src/SARgui.h
	    src/SARgui.cpp
	    src/SARgui_impl.cpp
	    src/SARgui_impl.h
	    src/NavFunc.h
	    src/NavFunc.cpp
	    src/bitmaps.h
	    src/bitmaps.cpp
	)

INCLUDE_DIRECTORIES(
	  src
	  src/OpenCPN
)

IF(UNIX)
 INCLUDE("cmake/FindTinyXML.cmake")
 FIND_PACKAGE(TinyXML QUIET)
ENDIF(UNIX)

IF(TINYXML_FOUND)
 message (STATUS "Building with system tinyxml")
 INCLUDE_DIRECTORIES(${TINYXML_INCLUDE_DIR})
 ADD_LIBRARY(${PACKAGE_NAME} SHARED ${SRC_SAR})
 TARGET_LINK_LIBRARIES(${PACKAGE_NAME} ${TINYXML_LIBRARIES})
ELSE(TINYXML_FOUND)
 message (STATUS "Building with embedded tinyxml")
 INCLUDE_DIRECTORIES(src/tinyxml/)
 SET(SRC_LTINYXML
            src/tinyxml/tinyxml.cpp
            src/tinyxml/tinyxmlparser.cpp
            src/tinyxml/tinyxmlerror.cpp
 )
 ADD_LIBRARY(${PACKAGE_NAME} SHARED ${SRC_SAR} ${SRC_LTINYXML})
ENDIF(TINYXML_FOUND)
ADD_DEFINITIONS(-DTIXML_USE_STL)

INCLUDE("cmake/PluginInstall.cmake")
INCLUDE("cmake/PluginLocalization.cmake")
INCLUDE("cmake/PluginPackage.cmake")
