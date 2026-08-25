#pragma once
#include "unitysdk.h"

class ConquestTileMapCommonEventSettingVisual;
class CommonEventType;

#define CONQUESTCOMMONEVENTDISPLAYORDERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD210)
#define CONQUESTCOMMONEVENTDISPLAYORDERVISUAL_GETDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1ADD220)
#define CONQUESTCOMMONEVENTDISPLAYORDERVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADD380)
#define CONQUESTCOMMONEVENTDISPLAYORDERVISUAL_SETDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1ADD3B0)

	inline static constexpr unsigned int ConquestCommonEventDisplayOrderVisual_TypeDefinitionIndex = 1467;

	class ConquestCommonEventDisplayOrderVisual : public Il2CppObject
	{
	public:
		ConquestTileMapCommonEventSettingVisual* commonEventSettingVisual; // 0x18
		CommonEventType* commonEventType; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMONEVENTDISPLAYORDERVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetDisplayOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMONEVENTDISPLAYORDERVISUAL_GETDISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void Initialize(ConquestTileMapCommonEventSettingVisual* arg, CommonEventType* arg2)
		{
			((::System::Void(*)(ConquestTileMapCommonEventSettingVisual*, CommonEventType*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMONEVENTDISPLAYORDERVISUAL_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDisplayOrder(::System::Int32 arg, int32_t&* arg2)
		{
			((::System::Void(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMONEVENTDISPLAYORDERVISUAL_SETDISPLAYORDER_OFFSET))(arg, arg2, nullptr);
		}

	};

