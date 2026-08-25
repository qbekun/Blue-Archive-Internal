#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }
namespace MX::Data { class EventContentShopKeyPair; }

#define MX_DATA_EVENTCONTENTSHOPKEYPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1847470)
#define MX_DATA_EVENTCONTENTSHOPKEYPAIR_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1847480)
#define MX_DATA_EVENTCONTENTSHOPKEYPAIR_SET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1847490)
#define MX_DATA_EVENTCONTENTSHOPKEYPAIR_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18474A0)
#define MX_DATA_EVENTCONTENTSHOPKEYPAIR_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18474B0)
#define MX_DATA_EVENTCONTENTSHOPKEYPAIR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18474C0)
#define MX_DATA_EVENTCONTENTSHOPKEYPAIR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1847500)
#define MX_DATA_EVENTCONTENTSHOPKEYPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1847520)
#define MX_DATA_EVENTCONTENTSHOPKEYPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x18474E0)
#define MX_DATA_EVENTCONTENTSHOPKEYPAIR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18475A0)
#define MX_DATA_EVENTCONTENTSHOPKEYPAIR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18475F0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentShopKeyPair_TypeDefinitionIndex = 15820;

	class EventContentShopKeyPair : public Il2CppObject
	{
	public:
		::FlatData::ShopCategoryType* _CategoryType_k__BackingField; // 0x10
		::System::Int64 _EventContentId_k__BackingField; // 0x18

		::System::Void .ctor(::System::Int64 arg, ::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSHOPKEYPAIR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSHOPKEYPAIR_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CategoryType(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSHOPKEYPAIR_SET_CATEGORYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSHOPKEYPAIR_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSHOPKEYPAIR_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Data::EventContentShopKeyPair* arg, ::MX::Data::EventContentShopKeyPair* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::EventContentShopKeyPair*, ::MX::Data::EventContentShopKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSHOPKEYPAIR_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Data::EventContentShopKeyPair* arg, ::MX::Data::EventContentShopKeyPair* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::EventContentShopKeyPair*, ::MX::Data::EventContentShopKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSHOPKEYPAIR_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSHOPKEYPAIR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Data::EventContentShopKeyPair* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::EventContentShopKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSHOPKEYPAIR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSHOPKEYPAIR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSHOPKEYPAIR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

