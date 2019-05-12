LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := KingdomRush_shared

LOCAL_MODULE_FILENAME := libKingdomRush

MY_CPP_LIST := $(wildcard $(LOCAL_PATH)/../../../Classes/*.cpp)

MY_CPP_LIST += $(LOCAL_PATH)/../../../cocos2d/cocos/ui/UILoadingBar.cpp

MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Bullet/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Data/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Layer/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Layer/Menu/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Map/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Monster/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Monster/Boss/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Monster/Desert/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Monster/Jungle/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Monster/Underground/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Road/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Scene/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Scene/Introduction/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Scene/Story/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Scene/UpdateTowerScene/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Soldier/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Sprite/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Sprite/Circle/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Sprite/TowerIcon/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/../../../Classes/Tower/*.cpp)

LOCAL_SRC_FILES := $(MY_CPP_LIST:$(LOCAL_PATH)/%=%)

#LOCAL_SRC_FILES := $(LOCAL_PATH)/hellocpp/main.cpp \
#                   $(LOCAL_PATH)/../../../Classes/AppDelegate.cpp \
#                   $(LOCAL_PATH)/../../../Classes/HelloWorldScene.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../Classes

# _COCOS_HEADER_ANDROID_BEGIN
# _COCOS_HEADER_ANDROID_END


LOCAL_STATIC_LIBRARIES := cc_static

# _COCOS_LIB_ANDROID_BEGIN
# _COCOS_LIB_ANDROID_END

include $(BUILD_SHARED_LIBRARY)

$(call import-module, cocos)

# _COCOS_LIB_IMPORT_ANDROID_BEGIN
# _COCOS_LIB_IMPORT_ANDROID_END
