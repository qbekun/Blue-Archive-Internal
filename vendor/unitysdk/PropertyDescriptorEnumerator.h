#pragma once
#include "unitysdk.h"

#define PROPERTYDESCRIPTORENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B41E80)
#define PROPERTYDESCRIPTORENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9B42C20)
#define PROPERTYDESCRIPTORENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x9B42CC0)
#define PROPERTYDESCRIPTORENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9B42D30)
#define PROPERTYDESCRIPTORENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9B42D80)
#define PROPERTYDESCRIPTORENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9B42DD0)
#define PROPERTYDESCRIPTORENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9B42E10)

	inline static constexpr unsigned int PropertyDescriptorEnumerator_TypeDefinitionIndex = 29445;

	class PropertyDescriptorEnumerator : public Il2CppObject
	{
	public:
		::System::ComponentModel::PropertyDescriptorCollection* _owner; // 0x10
		::System::Int32 _index; // 0x18

		::System::Void .ctor(::System::ComponentModel::PropertyDescriptorCollection* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptorCollection*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYDESCRIPTORENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYDESCRIPTORENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Collections::DictionaryEntry* get_Entry()
		{
			return (return (::System::Collections::DictionaryEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYDESCRIPTORENUMERATOR_GET_ENTRY_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYDESCRIPTORENUMERATOR_GET_KEY_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYDESCRIPTORENUMERATOR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYDESCRIPTORENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYDESCRIPTORENUMERATOR_RESET_OFFSET))(nullptr);
		}

	};

