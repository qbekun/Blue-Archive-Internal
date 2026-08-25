#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::GameData::DAO::Battle { class BlackBoardSetEffectDAO; }

#define MX_LOGIC_DATA_BLACKBOARDSETEFFECTVALUE_GET_SETVALUE_OFFSET UNITYSDK_OFFSET(0x12346B0)
#define MX_LOGIC_DATA_BLACKBOARDSETEFFECTVALUE_GET_BLACKBOARDKEYTYPE_OFFSET UNITYSDK_OFFSET(0x12346C0)
#define MX_LOGIC_DATA_BLACKBOARDSETEFFECTVALUE_GET_BLACKBOARDKEY_OFFSET UNITYSDK_OFFSET(0x12346D0)
#define MX_LOGIC_DATA_BLACKBOARDSETEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12346E0)
#define MX_LOGIC_DATA_BLACKBOARDSETEFFECTVALUE_GET_SETMIN_OFFSET UNITYSDK_OFFSET(0x1234740)
#define MX_LOGIC_DATA_BLACKBOARDSETEFFECTVALUE_GET_SETMAX_OFFSET UNITYSDK_OFFSET(0x1234750)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BlackBoardSetEffectValue_TypeDefinitionIndex = 13854;

	class BlackBoardSetEffectValue : public Il2CppObject
	{
	public:
		::System::String* _BlackBoardKey_k__BackingField; // 0x48
		::MX::Logic::Data::BlackboardKeyType* _BlackBoardKeyType_k__BackingField; // 0x50
		::System::Int64 _SetValue_k__BackingField; // 0x58
		::System::Int64 _SetMin_k__BackingField; // 0x60
		::System::Int64 _SetMax_k__BackingField; // 0x68

		::System::Int64 get_SetValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDSETEFFECTVALUE_GET_SETVALUE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BlackboardKeyType* get_BlackBoardKeyType()
		{
			return ((::MX::Logic::Data::BlackboardKeyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDSETEFFECTVALUE_GET_BLACKBOARDKEYTYPE_OFFSET))(nullptr);
		}

		::System::String* get_BlackBoardKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDSETEFFECTVALUE_GET_BLACKBOARDKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::BlackBoardSetEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BlackBoardSetEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDSETEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SetMin()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDSETEFFECTVALUE_GET_SETMIN_OFFSET))(nullptr);
		}

		::System::Int64 get_SetMax()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDSETEFFECTVALUE_GET_SETMAX_OFFSET))(nullptr);
		}

	};
}

