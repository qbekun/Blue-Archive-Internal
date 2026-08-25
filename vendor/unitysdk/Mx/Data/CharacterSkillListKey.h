#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class CharacterSkillListKey; }

#define MX_DATA_CHARACTERSKILLLISTKEY_GET_TSAINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1838A40)
#define MX_DATA_CHARACTERSKILLLISTKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1838A50)
#define MX_DATA_CHARACTERSKILLLISTKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1838AE0)
#define MX_DATA_CHARACTERSKILLLISTKEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1838B60)
#define MX_DATA_CHARACTERSKILLLISTKEY_SET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x1838B90)
#define MX_DATA_CHARACTERSKILLLISTKEY_SET_TSAINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1838BA0)
#define MX_DATA_CHARACTERSKILLLISTKEY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1838BB0)
#define MX_DATA_CHARACTERSKILLLISTKEY_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1838BE0)
#define MX_DATA_CHARACTERSKILLLISTKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1838C40)
#define MX_DATA_CHARACTERSKILLLISTKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1838C70)
#define MX_DATA_CHARACTERSKILLLISTKEY_GET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x1838CC0)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterSkillListKey_TypeDefinitionIndex = 15751;

	class CharacterSkillListKey : public Il2CppObject
	{
	public:
		::System::Int32 _FormIndex_k__BackingField; // 0x10
		::System::Int64 _TSAInteractionId_k__BackingField; // 0x18

		::System::Int64 get_TSAInteractionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERSKILLLISTKEY_GET_TSAINTERACTIONID_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERSKILLLISTKEY_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERSKILLLISTKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Data::CharacterSkillListKey* arg, ::MX::Data::CharacterSkillListKey* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::CharacterSkillListKey*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERSKILLLISTKEY_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_FormIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERSKILLLISTKEY_SET_FORMINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_TSAInteractionId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERSKILLLISTKEY_SET_TSAINTERACTIONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Data::CharacterSkillListKey* arg, ::MX::Data::CharacterSkillListKey* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::CharacterSkillListKey*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERSKILLLISTKEY_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::CharacterSkillListKey* get_Default()
		{
			return (return (::MX::Data::CharacterSkillListKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERSKILLLISTKEY_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERSKILLLISTKEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERSKILLLISTKEY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 get_FormIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERSKILLLISTKEY_GET_FORMINDEX_OFFSET))(nullptr);
		}

	};
}

