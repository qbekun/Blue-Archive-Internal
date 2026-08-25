#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B21470)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B21590)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B21600)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B21670)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B216E0)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B21750)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B217C0)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B21830)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B218A0)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B21910)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B21940)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9B21970)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B21980)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B21A10)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AmbientValueAttribute_TypeDefinitionIndex = 29343;

	class AmbientValueAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Object* _Value_k__BackingField; // 0x10

		::System::Void .ctor(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

