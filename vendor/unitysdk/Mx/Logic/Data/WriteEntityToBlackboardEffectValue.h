#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::GameData::DAO::Battle { class WriteEntityToBlackboardEffectDAO; }

#define MX_LOGIC_DATA_WRITEENTITYTOBLACKBOARDEFFECTVALUE_GET_BLACKBOARDKEYTOWRITE_OFFSET UNITYSDK_OFFSET(0x1240A30)
#define MX_LOGIC_DATA_WRITEENTITYTOBLACKBOARDEFFECTVALUE_GET_BLACKBOARDKEYTYPE_OFFSET UNITYSDK_OFFSET(0x1240A40)
#define MX_LOGIC_DATA_WRITEENTITYTOBLACKBOARDEFFECTVALUE_GET_TARGETSIDEFILTER_OFFSET UNITYSDK_OFFSET(0x1240A50)
#define MX_LOGIC_DATA_WRITEENTITYTOBLACKBOARDEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1240A60)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int WriteEntityToBlackboardEffectValue_TypeDefinitionIndex = 13939;

	class WriteEntityToBlackboardEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSideId* _TargetSideFilter_k__BackingField; // 0x48
		::MX::Logic::Data::BlackboardKeyType* _BlackboardKeyType_k__BackingField; // 0x4C
		::System::String* _BlackboardKeyToWrite_k__BackingField; // 0x50

		::System::String* get_BlackboardKeyToWrite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WRITEENTITYTOBLACKBOARDEFFECTVALUE_GET_BLACKBOARDKEYTOWRITE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BlackboardKeyType* get_BlackboardKeyType()
		{
			return ((::MX::Logic::Data::BlackboardKeyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WRITEENTITYTOBLACKBOARDEFFECTVALUE_GET_BLACKBOARDKEYTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSideId* get_TargetSideFilter()
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WRITEENTITYTOBLACKBOARDEFFECTVALUE_GET_TARGETSIDEFILTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::WriteEntityToBlackboardEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::WriteEntityToBlackboardEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WRITEENTITYTOBLACKBOARDEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

