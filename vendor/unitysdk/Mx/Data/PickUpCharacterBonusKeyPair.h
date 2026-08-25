#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }
namespace MX::Data { class PickUpCharacterBonusKeyPair; }

#define MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1856EF0)
#define MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1856F00)
#define MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_SET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1856F10)
#define MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_GET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1856F20)
#define MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_SET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1856F30)
#define MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1856F40)
#define MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1856F80)
#define MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1856FA0)
#define MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1856F60)
#define MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1857020)
#define MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1857070)

namespace MX::Data
{
	inline static constexpr unsigned int PickUpCharacterBonusKeyPair_TypeDefinitionIndex = 15871;

	class PickUpCharacterBonusKeyPair : public Il2CppObject
	{
	public:
		::FlatData::ShopCategoryType* _CategoryType_k__BackingField; // 0x10
		::System::Int64 _CharacterUniqueId_k__BackingField; // 0x18

		::System::Void .ctor(::FlatData::ShopCategoryType* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CategoryType(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_SET_CATEGORYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_GET_CHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_SET_CHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Data::PickUpCharacterBonusKeyPair* arg, ::MX::Data::PickUpCharacterBonusKeyPair* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::PickUpCharacterBonusKeyPair*, ::MX::Data::PickUpCharacterBonusKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Data::PickUpCharacterBonusKeyPair* arg, ::MX::Data::PickUpCharacterBonusKeyPair* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::PickUpCharacterBonusKeyPair*, ::MX::Data::PickUpCharacterBonusKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Data::PickUpCharacterBonusKeyPair* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::PickUpCharacterBonusKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPCHARACTERBONUSKEYPAIR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

