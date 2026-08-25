#pragma once
#include "unitysdk.h"

#define BITFIELD_GET_ENUMNAMES_OFFSET UNITYSDK_OFFSET(0x9FB3240)
#define BITFIELD_SET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x9FB3250)
#define BITFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB32B0)
#define BITFIELD_SET_ENUMNAMES_OFFSET UNITYSDK_OFFSET(0x9FB32F0)
#define BITFIELD_GET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x9FB3300)
#define BITFIELD_SET_ENUMVALUES_OFFSET UNITYSDK_OFFSET(0x9FB3310)
#define BITFIELD_GET_ENUMVALUES_OFFSET UNITYSDK_OFFSET(0x9FB3320)

	inline static constexpr unsigned int BitField_TypeDefinitionIndex = 33967;

	class BitField : public ::MX::Logic::Actions::ActionState
	{
	public:
		::Il2CppArray<::System::Object*>* _enumNames_k__BackingField; // 0x60
		::Il2CppArray<::System::Object*>* _enumValues_k__BackingField; // 0x68
		::System::Type* m_EnumType; // 0x70

		::Il2CppArray<::System::Object*>* get_enumNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BITFIELD_GET_ENUMNAMES_OFFSET))(nullptr);
		}

		::System::Void set_enumType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BITFIELD_SET_ENUMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BITFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_enumNames(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BITFIELD_SET_ENUMNAMES_OFFSET))(arg, nullptr);
		}

		::System::Type* get_enumType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BITFIELD_GET_ENUMTYPE_OFFSET))(nullptr);
		}

		::System::Void set_enumValues(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BITFIELD_SET_ENUMVALUES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_enumValues()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BITFIELD_GET_ENUMVALUES_OFFSET))(nullptr);
		}

	};

