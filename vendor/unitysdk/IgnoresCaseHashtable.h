#pragma once
#include "unitysdk.h"

#define IGNORESCASEHASHTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x98D660)
#define IGNORESCASEHASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x987230)
#define IGNORESCASEHASHTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x98BEB0)
#define IGNORESCASEHASHTABLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x991FF0)
#define IGNORESCASEHASHTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x98A660)
#define IGNORESCASEHASHTABLE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x98B230)
#define IGNORESCASEHASHTABLE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x989AA0)
#define IGNORESCASEHASHTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x98A120)
#define IGNORESCASEHASHTABLE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x992090)

	inline static constexpr unsigned int IgnoresCaseHashtable_TypeDefinitionIndex = 21680;

	class IgnoresCaseHashtable : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* orig; // 0x10
		::System::Collections::IDictionary* keys; // 0x18

		::System::Object* Remove(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IGNORESCASEHASHTABLE_REMOVE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNORESCASEHASHTABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNORESCASEHASHTABLE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNORESCASEHASHTABLE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IGNORESCASEHASHTABLE_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNORESCASEHASHTABLE_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Void set_Item(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + IGNORESCASEHASHTABLE_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNORESCASEHASHTABLE_CLEAR_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Values()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNORESCASEHASHTABLE_GET_VALUES_OFFSET))(nullptr);
		}

	};

