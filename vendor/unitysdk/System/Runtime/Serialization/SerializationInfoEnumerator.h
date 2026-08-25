#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F7470)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x91E8A10)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91F74E0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91F0820)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x91F7540)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x91E8880)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x91E8910)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x91F7550)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationInfoEnumerator_TypeDefinitionIndex = 24575;

	class SerializationInfoEnumerator : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _members; // 0x10
		::Il2CppArray<::System::Object*>* _data; // 0x18
		::Il2CppArray<::System::Object*>* _types; // 0x20
		::System::Int32 _numItems; // 0x28
		::System::Int32 _currItem; // 0x2C
		::System::Boolean _current; // 0x30

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Runtime::Serialization::SerializationEntry* get_Current()
		{
			return (return (::System::Runtime::Serialization::SerializationEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_NAME_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Type* get_ObjectType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

	};
}

