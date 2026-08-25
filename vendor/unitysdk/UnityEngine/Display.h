#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Display; }
namespace UnityEngine { class Vector3; }

#define UNITYENGINE_DISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F1280)
#define UNITYENGINE_DISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F12C0)
#define UNITYENGINE_DISPLAY_GET_RENDERINGWIDTH_OFFSET UNITYSDK_OFFSET(0xA1F12E0)
#define UNITYENGINE_DISPLAY_GET_RENDERINGHEIGHT_OFFSET UNITYSDK_OFFSET(0xA1F13D0)
#define UNITYENGINE_DISPLAY_GET_SYSTEMWIDTH_OFFSET UNITYSDK_OFFSET(0xA1F1470)
#define UNITYENGINE_DISPLAY_GET_SYSTEMHEIGHT_OFFSET UNITYSDK_OFFSET(0xA1F1560)
#define UNITYENGINE_DISPLAY_GET_REQUIRESSRGBBLITTOBACKBUFFER_OFFSET UNITYSDK_OFFSET(0xA1F1600)
#define UNITYENGINE_DISPLAY_RELATIVEMOUSEAT_OFFSET UNITYSDK_OFFSET(0xA1F16D0)
#define UNITYENGINE_DISPLAY_GET_MAIN_OFFSET UNITYSDK_OFFSET(0xA1F1800)
#define UNITYENGINE_DISPLAY_RECREATEDISPLAYLIST_OFFSET UNITYSDK_OFFSET(0xA1F1850)
#define UNITYENGINE_DISPLAY_FIREDISPLAYSUPDATED_OFFSET UNITYSDK_OFFSET(0xA1F1A40)
#define UNITYENGINE_DISPLAY_ADD_ONDISPLAYSUPDATED_OFFSET UNITYSDK_OFFSET(0xA1F1AF0)
#define UNITYENGINE_DISPLAY_REMOVE_ONDISPLAYSUPDATED_OFFSET UNITYSDK_OFFSET(0xA1F1BD0)
#define UNITYENGINE_DISPLAY_GETSYSTEMEXTIMPL_OFFSET UNITYSDK_OFFSET(0xA1F1510)
#define UNITYENGINE_DISPLAY_GETRENDERINGEXTIMPL_OFFSET UNITYSDK_OFFSET(0xA1F1380)
#define UNITYENGINE_DISPLAY_RELATIVEMOUSEATIMPL_OFFSET UNITYSDK_OFFSET(0xA1F17B0)
#define UNITYENGINE_DISPLAY_REQUIRESSRGBBLITTOBACKBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0xA1F1690)
#define UNITYENGINE_DISPLAY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1F1CB0)

namespace UnityEngine
{
	inline static constexpr unsigned int Display_TypeDefinitionIndex = 30990;

	class Display : public Il2CppObject
	{
	public:
		::System::Int32 nativeDisplay; // 0x10
		::Il2CppArray<::System::Object*>* displays; // 0x0
		::UnityEngine::Display* _mainDisplay; // 0x8
		::System::Int32 m_ActiveEditorGameViewTarget; // 0x10
		DisplaysUpdatedDelegate* onDisplaysUpdated; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_renderingWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_RENDERINGWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_renderingHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_RENDERINGHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_systemWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_SYSTEMWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_systemHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_SYSTEMHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_requiresSrgbBlitToBackbuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_REQUIRESSRGBBLITTOBACKBUFFER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* RelativeMouseAt(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_RELATIVEMOUSEAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Display* get_main()
		{
			return (return (::UnityEngine::Display*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_MAIN_OFFSET))(nullptr);
		}

		::System::Void RecreateDisplayList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_RECREATEDISPLAYLIST_OFFSET))(arg, nullptr);
		}

		::System::Void FireDisplaysUpdated()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_FIREDISPLAYSUPDATED_OFFSET))(nullptr);
		}

		::System::Void add_onDisplaysUpdated(DisplaysUpdatedDelegate* arg)
		{
			((::System::Void(*)(DisplaysUpdatedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_ADD_ONDISPLAYSUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onDisplaysUpdated(DisplaysUpdatedDelegate* arg)
		{
			((::System::Void(*)(DisplaysUpdatedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_REMOVE_ONDISPLAYSUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void GetSystemExtImpl(::System::Int32 arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Int32, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GETSYSTEMEXTIMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetRenderingExtImpl(::System::Int32 arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Int32, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GETRENDERINGEXTIMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 RelativeMouseAtImpl(::System::Int32 arg, ::System::Int32 arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_RELATIVEMOUSEATIMPL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean RequiresSrgbBlitToBackbufferImpl(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_REQUIRESSRGBBLITTOBACKBUFFERIMPL_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

