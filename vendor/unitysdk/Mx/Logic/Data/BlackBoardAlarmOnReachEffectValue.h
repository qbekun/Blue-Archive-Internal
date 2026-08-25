#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::GameData::DAO::Battle { class BlackBoardAlarmOnReachEffectDAO; }

#define MX_LOGIC_DATA_BLACKBOARDALARMONREACHEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x12343E0)
#define MX_LOGIC_DATA_BLACKBOARDALARMONREACHEFFECTVALUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x12343F0)
#define MX_LOGIC_DATA_BLACKBOARDALARMONREACHEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1234400)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BlackBoardAlarmOnReachEffectValue_TypeDefinitionIndex = 13852;

	class BlackBoardAlarmOnReachEffectValue : public Il2CppObject
	{
	public:
		::System::Int32 _Duration_k__BackingField; // 0x48
		::System::Boolean _IsDispellable_k__BackingField; // 0x4C
		::System::String* BlackBoardKey; // 0x50
		::MX::Logic::Data::BlackboardKeyType* BlackBoardKeyType; // 0x58
		::System::Int64 AlarmValue; // 0x60
		::Il2CppArray<::System::Object*>* AlarmEffectGroupIds; // 0x68
		::Il2CppArray<::System::Object*>* NoAlarmSkillSlots; // 0x70

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDALARMONREACHEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDALARMONREACHEFFECTVALUE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::BlackBoardAlarmOnReachEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BlackBoardAlarmOnReachEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDALARMONREACHEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

