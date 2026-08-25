#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class BlackBoardMultiAlarmEffectDAO; }

#define MX_LOGIC_DATA_BLACKBOARDMULTIALARMEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1234510)
#define MX_LOGIC_DATA_BLACKBOARDMULTIALARMEFFECTVALUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1234690)
#define MX_LOGIC_DATA_BLACKBOARDMULTIALARMEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x12346A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BlackBoardMultiAlarmEffectValue_TypeDefinitionIndex = 13853;

	class BlackBoardMultiAlarmEffectValue : public Il2CppObject
	{
	public:
		::System::Int32 _Duration_k__BackingField; // 0x48
		::System::Boolean _IsDispellable_k__BackingField; // 0x4C
		::Il2CppArray<::System::Object*>* BlackBoardKeyList; // 0x50
		::Il2CppArray<::System::Object*>* BlackBoardKeyTypeList; // 0x58
		::Il2CppArray<::System::Object*>* AlarmValueList; // 0x60
		::Il2CppArray<::System::Object*>* EachAlarmEffectGroupIdList; // 0x68
		::System::Int32 CombinedAlarmCount; // 0x70
		::Il2CppArray<::System::Object*>* CombinedAlarmEffectGroupIdList; // 0x78
		::Il2CppArray<::System::Object*>* NoAlarmSkillSlots; // 0x80

		::System::Void .ctor(::MX::GameData::DAO::Battle::BlackBoardMultiAlarmEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BlackBoardMultiAlarmEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDMULTIALARMEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDMULTIALARMEFFECTVALUE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDMULTIALARMEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

	};
}

