#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class StackDamageEffectDAO; }

#define MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123F1E0)
#define MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_GET_ACTUATESTACKCOUNT_OFFSET UNITYSDK_OFFSET(0x123F4C0)
#define MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_GET_STACKCOUNTGROUPID_OFFSET UNITYSDK_OFFSET(0x123F4D0)
#define MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123F4E0)
#define MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_GET_ACTUATEGROUPID_OFFSET UNITYSDK_OFFSET(0x123F4F0)
#define MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x123F500)
#define MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x123F510)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StackDamageEffectValue_TypeDefinitionIndex = 13926;

	class StackDamageEffectValue : public Il2CppObject
	{
	public:
		::System::String* _StackCountGroupId_k__BackingField; // 0x48
		::System::Int32 _ActuateStackCount_k__BackingField; // 0x50
		::System::String* _ActuateGroupId_k__BackingField; // 0x58
		::Il2CppArray<::System::Object*>* ApplyLogifEffectList; // 0x60
		::System::Int64 _DurationFrame_k__BackingField; // 0x68
		::System::Boolean _Dispellable_k__BackingField; // 0x70
		::System::Int32 _Level_k__BackingField; // 0x74

		::System::Void .ctor(::MX::GameData::DAO::Battle::StackDamageEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::StackDamageEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ActuateStackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_GET_ACTUATESTACKCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_StackCountGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_GET_STACKCOUNTGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::String* get_ActuateGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_GET_ACTUATEGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationFrame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STACKDAMAGEEFFECTVALUE_GET_LEVEL_OFFSET))(nullptr);
		}

	};
}

