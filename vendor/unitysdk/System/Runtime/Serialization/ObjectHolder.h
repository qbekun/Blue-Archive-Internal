#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91FC230)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91FF1C0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91FEA30)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_INCREMENTDESCENDENTFIXUPS_OFFSET UNITYSDK_OFFSET(0x92009B0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_DECREMENTFIXUPSREMAINING_OFFSET UNITYSDK_OFFSET(0x91FE650)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_REMOVEDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x91FE6C0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDFIXUP_OFFSET UNITYSDK_OFFSET(0x91FFED0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDESCENDENTDEPENDENCYCHAIN_OFFSET UNITYSDK_OFFSET(0x92009C0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x9200010)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x91FF430)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_MARKFORCOMPLETIONWHENAVAILABLE_OFFSET UNITYSDK_OFFSET(0x91FE7B0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETFLAGS_OFFSET UNITYSDK_OFFSET(0x91FCC40)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_ISINCOMPLETEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x91FC7A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_ISINCOMPLETEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x91FDCC0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESDELAYEDFIXUP_OFFSET UNITYSDK_OFFSET(0x91FF420)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESVALUETYPEFIXUP_OFFSET UNITYSDK_OFFSET(0x91FCFD0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_VALUETYPEFIXUPPERFORMED_OFFSET UNITYSDK_OFFSET(0x91FCFE0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_VALUETYPEFIXUPPERFORMED_OFFSET UNITYSDK_OFFSET(0x91FE760)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_HASISERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x91FE540)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_HASSURROGATE_OFFSET UNITYSDK_OFFSET(0x91FCAB0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CANSURROGATEDOBJECTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x91FCAC0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CANOBJECTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x91FC6F0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_DIRECTLYDEPENDENTOBJECTS_OFFSET UNITYSDK_OFFSET(0x9200C70)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TOTALDEPENDENTOBJECTS_OFFSET UNITYSDK_OFFSET(0x91FF640)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REACHABLE_OFFSET UNITYSDK_OFFSET(0x9200C80)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REACHABLE_OFFSET UNITYSDK_OFFSET(0x9200C90)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTIONREACHABLE_OFFSET UNITYSDK_OFFSET(0x91FE750)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9200CA0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_TYPELOADEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9200CB0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_OBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x9200CC0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETOBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x91FCB50)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_SERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x9200CD0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_SERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x9200CE0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_SURROGATE_OFFSET UNITYSDK_OFFSET(0x9200CF0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_DEPENDENTOBJECTS_OFFSET UNITYSDK_OFFSET(0x9200D00)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_DEPENDENTOBJECTS_OFFSET UNITYSDK_OFFSET(0x9200D10)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESSERINFOFIXUP_OFFSET UNITYSDK_OFFSET(0x91FFCE0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REQUIRESSERINFOFIXUP_OFFSET UNITYSDK_OFFSET(0x91FCFB0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_VALUEFIXUP_OFFSET UNITYSDK_OFFSET(0x9200D20)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_COMPLETELYFIXED_OFFSET UNITYSDK_OFFSET(0x91FC6D0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CONTAINERID_OFFSET UNITYSDK_OFFSET(0x9200B20)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectHolder_TypeDefinitionIndex = 24594;

	class ObjectHolder : public Il2CppObject
	{
	public:
		::System::Object* m_object; // 0x10
		::System::Int64 m_id; // 0x18
		::System::Int32 m_missingElementsRemaining; // 0x20
		::System::Int32 m_missingDecendents; // 0x24
		::System::Runtime::Serialization::SerializationInfo* m_serInfo; // 0x28
		::System::Runtime::Serialization::ISerializationSurrogate* m_surrogate; // 0x30
		::System::Runtime::Serialization::FixupHolderList* m_missingElements; // 0x38
		::System::Runtime::Serialization::LongList* m_dependentObjects; // 0x40
		::System::Runtime::Serialization::ObjectHolder* m_next; // 0x48
		::System::Int32 m_flags; // 0x50
		::System::Boolean m_markForFixupWhenAvailable; // 0x54
		::System::Runtime::Serialization::ValueTypeFixupInfo* m_valueFixup; // 0x58
		::System::Runtime::Serialization::TypeLoadExceptionHolder* m_typeLoad; // 0x60
		::System::Boolean m_reachable; // 0x68

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int64 arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::ISerializationSurrogate* arg, ::System::Int64 arg, ::System::Reflection::FieldInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int64, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, ::System::Int64, ::System::Reflection::FieldInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int64 arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::ISerializationSurrogate* arg, ::System::Int64 arg, ::System::Reflection::FieldInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, ::System::Int64, ::System::Reflection::FieldInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void IncrementDescendentFixups(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_INCREMENTDESCENDENTFIXUPS_OFFSET))(arg, nullptr);
		}

		::System::Void DecrementFixupsRemaining(::System::Runtime::Serialization::ObjectManager* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::ObjectManager*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_DECREMENTFIXUPSREMAINING_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveDependency(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_REMOVEDEPENDENCY_OFFSET))(arg, nullptr);
		}

		::System::Void AddFixup(::System::Runtime::Serialization::FixupHolder* arg, ::System::Runtime::Serialization::ObjectManager* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::FixupHolder*, ::System::Runtime::Serialization::ObjectManager*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDFIXUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateDescendentDependencyChain(::System::Int32 arg, ::System::Runtime::Serialization::ObjectManager* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Runtime::Serialization::ObjectManager*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDESCENDENTDEPENDENCYCHAIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDependency(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_ADDDEPENDENCY_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateData(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::ISerializationSurrogate* arg, ::System::Int64 arg, ::System::Reflection::FieldInfo* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Runtime::Serialization::ObjectManager* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, ::System::Int64, ::System::Reflection::FieldInfo*, ::Il2CppArray<::System::Object*>*, ::System::Runtime::Serialization::ObjectManager*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_UPDATEDATA_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MarkForCompletionWhenAvailable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_MARKFORCOMPLETIONWHENAVAILABLE_OFFSET))(nullptr);
		}

		::System::Void SetFlags()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETFLAGS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsIncompleteObjectReference()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_ISINCOMPLETEOBJECTREFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_IsIncompleteObjectReference(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_ISINCOMPLETEOBJECTREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RequiresDelayedFixup()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESDELAYEDFIXUP_OFFSET))(nullptr);
		}

		::System::Boolean get_RequiresValueTypeFixup()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESVALUETYPEFIXUP_OFFSET))(nullptr);
		}

		::System::Boolean get_ValueTypeFixupPerformed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_VALUETYPEFIXUPPERFORMED_OFFSET))(nullptr);
		}

		::System::Void set_ValueTypeFixupPerformed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_VALUETYPEFIXUPPERFORMED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasISerializable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_HASISERIALIZABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasSurrogate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_HASSURROGATE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSurrogatedObjectValueChange()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CANSURROGATEDOBJECTVALUECHANGE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanObjectValueChange()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CANOBJECTVALUECHANGE_OFFSET))(nullptr);
		}

		::System::Int32 get_DirectlyDependentObjects()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_DIRECTLYDEPENDENTOBJECTS_OFFSET))(nullptr);
		}

		::System::Int32 get_TotalDependentObjects()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TOTALDEPENDENTOBJECTS_OFFSET))(nullptr);
		}

		::System::Boolean get_Reachable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REACHABLE_OFFSET))(nullptr);
		}

		::System::Void set_Reachable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REACHABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TypeLoadExceptionReachable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTIONREACHABLE_OFFSET))(nullptr);
		}

		::System::Runtime::Serialization::TypeLoadExceptionHolder* get_TypeLoadException()
		{
			return (return (::System::Runtime::Serialization::TypeLoadExceptionHolder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_TYPELOADEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void set_TypeLoadException(::System::Runtime::Serialization::TypeLoadExceptionHolder* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::TypeLoadExceptionHolder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_TYPELOADEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Object* get_ObjectValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_OBJECTVALUE_OFFSET))(nullptr);
		}

		::System::Void SetObjectValue(::System::Object* arg, ::System::Runtime::Serialization::ObjectManager* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::ObjectManager*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SETOBJECTVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Serialization::SerializationInfo* get_SerializationInfo()
		{
			return (return (::System::Runtime::Serialization::SerializationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_SERIALIZATIONINFO_OFFSET))(nullptr);
		}

		::System::Void set_SerializationInfo(::System::Runtime::Serialization::SerializationInfo* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_SERIALIZATIONINFO_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::ISerializationSurrogate* get_Surrogate()
		{
			return (return (::System::Runtime::Serialization::ISerializationSurrogate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_SURROGATE_OFFSET))(nullptr);
		}

		::System::Runtime::Serialization::LongList* get_DependentObjects()
		{
			return (return (::System::Runtime::Serialization::LongList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_DEPENDENTOBJECTS_OFFSET))(nullptr);
		}

		::System::Void set_DependentObjects(::System::Runtime::Serialization::LongList* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::LongList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_DEPENDENTOBJECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RequiresSerInfoFixup()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_REQUIRESSERINFOFIXUP_OFFSET))(nullptr);
		}

		::System::Void set_RequiresSerInfoFixup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_SET_REQUIRESSERINFOFIXUP_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::ValueTypeFixupInfo* get_ValueFixup()
		{
			return (return (::System::Runtime::Serialization::ValueTypeFixupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_VALUEFIXUP_OFFSET))(nullptr);
		}

		::System::Boolean get_CompletelyFixed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_COMPLETELYFIXED_OFFSET))(nullptr);
		}

		::System::Int64 get_ContainerID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDER_GET_CONTAINERID_OFFSET))(nullptr);
		}

	};
}

