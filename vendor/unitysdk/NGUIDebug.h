#pragma once
#include "unitysdk.h"

class NGUIDebug;
namespace UnityEngine { class Bounds; }

#define NGUIDEBUG_GET_DEBUGRAYCAST_OFFSET UNITYSDK_OFFSET(0x1995200)
#define NGUIDEBUG_SET_DEBUGRAYCAST_OFFSET UNITYSDK_OFFSET(0x1995250)
#define NGUIDEBUG_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1995300)
#define NGUIDEBUG_LOGSTRING_OFFSET UNITYSDK_OFFSET(0x1995450)
#define NGUIDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x19955F0)
#define NGUIDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x1995700)
#define NGUIDEBUG_CLEAR_OFFSET UNITYSDK_OFFSET(0x19957B0)
#define NGUIDEBUG_DRAWBOUNDS_OFFSET UNITYSDK_OFFSET(0x1995860)
#define NGUIDEBUG_ONGUI_OFFSET UNITYSDK_OFFSET(0x1995AC0)
#define NGUIDEBUG_.CTOR_OFFSET UNITYSDK_OFFSET(0x19965E0)
#define NGUIDEBUG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x19965F0)

	inline static constexpr unsigned int NGUIDebug_TypeDefinitionIndex = 108;

	class NGUIDebug : public Il2CppObject
	{
	public:
		::System::Boolean mRayDebug; // 0x0
		Il2CppObject* mLines; // 0x8
		NGUIDebug* mInstance; // 0x10

		::System::Boolean get_debugRaycast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIDEBUG_GET_DEBUGRAYCAST_OFFSET))(nullptr);
		}

		::System::Void set_debugRaycast(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUIDEBUG_SET_DEBUGRAYCAST_OFFSET))(arg, nullptr);
		}

		::System::Void CreateInstance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIDEBUG_CREATEINSTANCE_OFFSET))(nullptr);
		}

		::System::Void LogString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIDEBUG_LOGSTRING_OFFSET))(str, nullptr);
		}

		::System::Void Log(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIDEBUG_LOG_OFFSET))(arg, nullptr);
		}

		::System::Void Log(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIDEBUG_LOG_OFFSET))(str, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIDEBUG_CLEAR_OFFSET))(nullptr);
		}

		::System::Void DrawBounds(::UnityEngine::Bounds* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIDEBUG_DRAWBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Void OnGUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIDEBUG_ONGUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIDEBUG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIDEBUG_.CCTOR_OFFSET))(nullptr);
		}

	};

