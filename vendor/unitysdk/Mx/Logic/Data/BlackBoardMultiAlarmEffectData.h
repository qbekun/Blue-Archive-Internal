#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_BLACKBOARDMULTIALARMEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3E10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BlackBoardMultiAlarmEffectData_TypeDefinitionIndex = 13554;

	class BlackBoardMultiAlarmEffectData : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x58
		::System::Boolean IsDispellable; // 0x5C
		::System::String* BlackBoardKeyList; // 0x60
		::System::String* BlackBoardKeyTypeList; // 0x68
		::System::String* AlarmValueList; // 0x70
		::System::String* EachAlarmEffectGroupIdList; // 0x78
		::System::Int32 CombinedAlarmCount; // 0x80
		::System::String* CombinedAlarmEffectGroupIdList; // 0x88
		::System::String* NoAlarmSkillSlotList; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDMULTIALARMEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

