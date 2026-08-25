#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BlackboardKeyType; }

#define MX_LOGIC_DATA_BLACKBOARDALARMONREACHEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3E00)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BlackBoardAlarmOnReachEffectData_TypeDefinitionIndex = 13553;

	class BlackBoardAlarmOnReachEffectData : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x58
		::System::Boolean IsDispellable; // 0x5C
		::System::String* BlackBoardKey; // 0x60
		::MX::Logic::Data::BlackboardKeyType* BlackBoardKeyType; // 0x68
		::System::Int64 AlarmValue; // 0x70
		::System::String* AlarmEffectGroupIdList; // 0x78
		::System::String* NoAlarmSkillSlotList; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDALARMONREACHEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

