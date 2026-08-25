#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91FBF30)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_CANCALLGETTYPE_OFFSET UNITYSDK_OFFSET(0x91FBFC0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_SET_TOPOBJECT_OFFSET UNITYSDK_OFFSET(0x91FBFD0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GET_TOPOBJECT_OFFSET UNITYSDK_OFFSET(0x91FBFE0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GET_SPECIALFIXUPOBJECTS_OFFSET UNITYSDK_OFFSET(0x91FBFF0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FINDOBJECTHOLDER_OFFSET UNITYSDK_OFFSET(0x91FC110)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FINDORCREATEOBJECTHOLDER_OFFSET UNITYSDK_OFFSET(0x91FC170)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDOBJECTHOLDER_OFFSET UNITYSDK_OFFSET(0x91FC260)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETCOMPLETIONINFO_OFFSET UNITYSDK_OFFSET(0x91FC3C0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FIXUPSPECIALOBJECT_OFFSET UNITYSDK_OFFSET(0x91FC7B0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RESOLVEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x91FDA10)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DOVALUETYPEFIXUP_OFFSET UNITYSDK_OFFSET(0x91FD010)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_COMPLETEOBJECT_OFFSET UNITYSDK_OFFSET(0x91FDCE0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DONEWLYREGISTEREDOBJECTFIXUPS_OFFSET UNITYSDK_OFFSET(0x91FD6E0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x91FE830)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTERSTRING_OFFSET UNITYSDK_OFFSET(0x91FE930)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0x91FEB70)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_COMPLETEISERIALIZABLEOBJECT_OFFSET UNITYSDK_OFFSET(0x91FCCD0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x91FF650)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DOFIXUPS_OFFSET UNITYSDK_OFFSET(0x91FF780)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTERFIXUP_OFFSET UNITYSDK_OFFSET(0x91FFDE0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDFIXUP_OFFSET UNITYSDK_OFFSET(0x92000E0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDDELAYEDFIXUP_OFFSET UNITYSDK_OFFSET(0x92003E0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDARRAYELEMENTFIXUP_OFFSET UNITYSDK_OFFSET(0x9200560)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEDESERIALIZATIONEVENT_OFFSET UNITYSDK_OFFSET(0x92006E0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x9200730)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x92007C0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEONDESERIALIZEDEVENT_OFFSET UNITYSDK_OFFSET(0x9200850)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEONDESERIALIZINGEVENT_OFFSET UNITYSDK_OFFSET(0x9200900)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectManager_TypeDefinitionIndex = 24593;

	class ObjectManager : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::DeserializationEventHandler* m_onDeserializationHandler; // 0x10
		::System::Runtime::Serialization::SerializationEventHandler* m_onDeserializedHandler; // 0x18
		::Il2CppArray<::System::Object*>* m_objects; // 0x20
		::System::Object* m_topObject; // 0x28
		::System::Runtime::Serialization::ObjectHolderList* m_specialFixupObjects; // 0x30
		::System::Int64 m_fixupCount; // 0x38
		::System::Runtime::Serialization::ISurrogateSelector* m_selector; // 0x40
		::System::Runtime::Serialization::StreamingContext* m_context; // 0x48

		::System::Void .ctor(::System::Runtime::Serialization::ISurrogateSelector* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CanCallGetType(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_CANCALLGETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_TopObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_SET_TOPOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Object* get_TopObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GET_TOPOBJECT_OFFSET))(nullptr);
		}

		::System::Runtime::Serialization::ObjectHolderList* get_SpecialFixupObjects()
		{
			return (return (::System::Runtime::Serialization::ObjectHolderList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GET_SPECIALFIXUPOBJECTS_OFFSET))(nullptr);
		}

		::System::Runtime::Serialization::ObjectHolder* FindObjectHolder(::System::Int64 arg)
		{
			return (return (::System::Runtime::Serialization::ObjectHolder*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FINDOBJECTHOLDER_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::ObjectHolder* FindOrCreateObjectHolder(::System::Int64 arg)
		{
			return (return (::System::Runtime::Serialization::ObjectHolder*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FINDORCREATEOBJECTHOLDER_OFFSET))(arg, nullptr);
		}

		::System::Void AddObjectHolder(::System::Runtime::Serialization::ObjectHolder* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::ObjectHolder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDOBJECTHOLDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetCompletionInfo(::System::Runtime::Serialization::FixupHolder* arg, ::System::Runtime::Serialization::ObjectHolder&* arg, ::System::Object&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Serialization::FixupHolder*, ::System::Runtime::Serialization::ObjectHolder&*, ::System::Object&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETCOMPLETIONINFO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void FixupSpecialObject(::System::Runtime::Serialization::ObjectHolder* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::ObjectHolder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_FIXUPSPECIALOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ResolveObjectReference(::System::Runtime::Serialization::ObjectHolder* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Serialization::ObjectHolder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RESOLVEOBJECTREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean DoValueTypeFixup(::System::Reflection::FieldInfo* arg, ::System::Runtime::Serialization::ObjectHolder* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::FieldInfo*, ::System::Runtime::Serialization::ObjectHolder*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DOVALUETYPEFIXUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CompleteObject(::System::Runtime::Serialization::ObjectHolder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::ObjectHolder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_COMPLETEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DoNewlyRegisteredObjectFixups(::System::Runtime::Serialization::ObjectHolder* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::ObjectHolder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DONEWLYREGISTEREDOBJECTFIXUPS_OFFSET))(arg, nullptr);
		}

		::System::Object* GetObject(::System::Int64 arg)
		{
			return (return (::System::Object*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterString(::System::String* str, ::System::Int64 arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Int64 arg, ::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::System::Runtime::Serialization::SerializationInfo*, ::System::Int64, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTERSTRING_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void RegisterObject(::System::Object* arg, ::System::Int64 arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Int64 arg, ::System::Reflection::MemberInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int64, ::System::Runtime::Serialization::SerializationInfo*, ::System::Int64, ::System::Reflection::MemberInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTEROBJECT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CompleteISerializableObject(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_COMPLETEISERIALIZABLEOBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Reflection::RuntimeConstructorInfo* GetConstructor(::System::RuntimeType* arg)
		{
			return (return (::System::Reflection::RuntimeConstructorInfo*(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_GETCONSTRUCTOR_OFFSET))(arg, nullptr);
		}

		::System::Void DoFixups()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_DOFIXUPS_OFFSET))(nullptr);
		}

		::System::Void RegisterFixup(::System::Runtime::Serialization::FixupHolder* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::FixupHolder*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_REGISTERFIXUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RecordFixup(::System::Int64 arg, ::System::Reflection::MemberInfo* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Reflection::MemberInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDFIXUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RecordDelayedFixup(::System::Int64 arg, ::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDDELAYEDFIXUP_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void RecordArrayElementFixup(::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::Il2CppArray<::System::Object*>*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RECORDARRAYELEMENTFIXUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RaiseDeserializationEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEDESERIALIZATIONEVENT_OFFSET))(nullptr);
		}

		::System::Void AddOnDeserialization(::System::Runtime::Serialization::DeserializationEventHandler* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::DeserializationEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Void AddOnDeserialized(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_ADDONDESERIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void RaiseOnDeserializedEvent(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEONDESERIALIZEDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void RaiseOnDeserializingEvent(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_RAISEONDESERIALIZINGEVENT_OFFSET))(arg, nullptr);
		}

	};
}

