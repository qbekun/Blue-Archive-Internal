#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_EVENTBATTLESETTING_GET_BUFFIDS_OFFSET UNITYSDK_OFFSET(0x11DB9F0)
#define MX_LOGIC_DATA_EVENTBATTLESETTING_SET_BUFFIDS_OFFSET UNITYSDK_OFFSET(0x11DBA00)
#define MX_LOGIC_DATA_EVENTBATTLESETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DACC0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int EventBattleSetting_TypeDefinitionIndex = 13428;

	class EventBattleSetting : public Il2CppObject
	{
	public:
		Il2CppObject* _BuffIds_k__BackingField; // 0x10

		Il2CppObject* get_BuffIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EVENTBATTLESETTING_GET_BUFFIDS_OFFSET))(nullptr);
		}

		::System::Void set_BuffIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EVENTBATTLESETTING_SET_BUFFIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EVENTBATTLESETTING_.CTOR_OFFSET))(nullptr);
		}

	};
}

