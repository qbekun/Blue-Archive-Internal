#pragma once
#include "unitysdk.h"

class CanNotTouchTypes;

#define SCENARIOVIDEOINFO_SET_CANNOTTOUCHTYPE_OFFSET UNITYSDK_OFFSET(0x1EDE860)
#define SCENARIOVIDEOINFO_GET_CANTOUCH_OFFSET UNITYSDK_OFFSET(0x1EDE870)
#define SCENARIOVIDEOINFO_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1EDE880)
#define SCENARIOVIDEOINFO_SET_CANTOUCH_OFFSET UNITYSDK_OFFSET(0x1EDE890)
#define SCENARIOVIDEOINFO_GET_CANNOTTOUCHTYPE_OFFSET UNITYSDK_OFFSET(0x1EDE8A0)
#define SCENARIOVIDEOINFO_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1EDE8B0)
#define SCENARIOVIDEOINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE8C0)
#define SCENARIOVIDEOINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EDE8D0)

	inline static constexpr unsigned int ScenarioVideoInfo_TypeDefinitionIndex = 1852;

	class ScenarioVideoInfo : public Il2CppObject
	{
	public:
		::System::Int64 _VideoId_k__BackingField; // 0x10
		::System::Boolean _CanTouch_k__BackingField; // 0x18
		CanNotTouchTypes* _CanNotTouchType_k__BackingField; // 0x1C

		::System::Void set_CanNotTouchType(CanNotTouchTypes* arg)
		{
			((::System::Void(*)(CanNotTouchTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVIDEOINFO_SET_CANNOTTOUCHTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanTouch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVIDEOINFO_GET_CANTOUCH_OFFSET))(nullptr);
		}

		::System::Void set_VideoId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVIDEOINFO_SET_VIDEOID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CanTouch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVIDEOINFO_SET_CANTOUCH_OFFSET))(arg, nullptr);
		}

		CanNotTouchTypes* get_CanNotTouchType()
		{
			return ((CanNotTouchTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVIDEOINFO_GET_CANNOTTOUCHTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_VideoId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVIDEOINFO_GET_VIDEOID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVIDEOINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVIDEOINFO_TOSTRING_OFFSET))(nullptr);
		}

	};

