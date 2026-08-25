#pragma once
#include "../unitysdk.h"

namespace AutoMapper { class MemberMap; }
namespace AutoMapper { class TypeMap; }

#define AUTOMAPPER_MEMBERMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D1200)
#define AUTOMAPPER_MEMBERMAP_GET_TYPEMAP_OFFSET UNITYSDK_OFFSET(0x4D1230)
#define AUTOMAPPER_MEMBERMAP_SET_TYPEMAP_OFFSET UNITYSDK_OFFSET(0x4D1240)
#define AUTOMAPPER_MEMBERMAP_GET_DESTINATIONNAME_OFFSET UNITYSDK_OFFSET(0x4D1250)
#define AUTOMAPPER_MEMBERMAP_SET_IGNORED_OFFSET UNITYSDK_OFFSET(0x4D1260)
#define AUTOMAPPER_MEMBERMAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4D1270)
#define AUTOMAPPER_MEMBERMAP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4D1290)

namespace AutoMapper
{
	inline static constexpr unsigned int MemberMap_TypeDefinitionIndex = 37629;

	class MemberMap : public Il2CppObject
	{
	public:
		::AutoMapper::MemberMap* Instance; // 0x0
		::AutoMapper::TypeMap* _TypeMap_k__BackingField; // 0x10
		::System::Boolean _Inline_k__BackingField; // 0x18

		::System::Void .ctor(::AutoMapper::TypeMap* arg)
		{
			((::System::Void(*)(::AutoMapper::TypeMap*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_MEMBERMAP_.CTOR_OFFSET))(arg, nullptr);
		}

		::AutoMapper::TypeMap* get_TypeMap()
		{
			return (return (::AutoMapper::TypeMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_MEMBERMAP_GET_TYPEMAP_OFFSET))(nullptr);
		}

		::System::Void set_TypeMap(::AutoMapper::TypeMap* arg)
		{
			((::System::Void(*)(::AutoMapper::TypeMap*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_MEMBERMAP_SET_TYPEMAP_OFFSET))(arg, nullptr);
		}

		::System::String* get_DestinationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_MEMBERMAP_GET_DESTINATIONNAME_OFFSET))(nullptr);
		}

		::System::Void set_Ignored(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_MEMBERMAP_SET_IGNORED_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_MEMBERMAP_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_MEMBERMAP_.CCTOR_OFFSET))(nullptr);
		}

	};
}

