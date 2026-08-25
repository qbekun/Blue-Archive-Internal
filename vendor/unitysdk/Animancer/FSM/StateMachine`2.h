#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_FSM_STATEMACHINE`2_GET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_SET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_GET_CURRENTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_GET_PREVIOUSKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_GET_NEXTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_INITIALIZEAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_TRYSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_TRYSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_ANIMANCER.FSM.IKEYEDSTATEMACHINE_TKEY_.TRYSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_TRYRESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_TRYRESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_ANIMANCER.FSM.IKEYEDSTATEMACHINE_TKEY_.TRYRESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_FORCESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_FORCESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_ANIMANCER.FSM.IKEYEDSTATEMACHINE_TKEY_.FORCESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TSTATE__.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_GETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_SETFAKEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer::FSM
{
	inline static constexpr unsigned int StateMachine`2_TypeDefinitionIndex = 37789;

	class StateMachine`2 : public ::System::Xml::Schema::XmlSchemaNumericFacet
	{
	public:
		Il2CppObject* _Dictionary_k__BackingField; // 0x0
		Il2CppObject* _CurrentKey; // 0x0

		Il2CppObject* get_Dictionary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_GET_DICTIONARY_OFFSET))(nullptr);
		}

		::System::Void set_Dictionary(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_SET_DICTIONARY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CurrentKey()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_GET_CURRENTKEY_OFFSET))(nullptr);
		}

		Il2CppObject* get_PreviousKey()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_GET_PREVIOUSKEY_OFFSET))(nullptr);
		}

		Il2CppObject* get_NextKey()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_GET_NEXTKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_INITIALIZEAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean TrySetState(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_TRYSETSTATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* TrySetState(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_TRYSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Object* Animancer.FSM.IKeyedStateMachine_TKey_.TrySetState(Il2CppObject* arg)
		{
			return (return (::System::Object*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_ANIMANCER.FSM.IKEYEDSTATEMACHINE_TKEY_.TRYSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryResetState(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_TRYRESETSTATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* TryResetState(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_TRYRESETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Object* Animancer.FSM.IKeyedStateMachine_TKey_.TryResetState(Il2CppObject* arg)
		{
			return (return (::System::Object*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_ANIMANCER.FSM.IKEYEDSTATEMACHINE_TKEY_.TRYRESETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void ForceSetState(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_FORCESETSTATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ForceSetState(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_FORCESETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Object* Animancer.FSM.IKeyedStateMachine_TKey_.ForceSetState(Il2CppObject* arg)
		{
			return (return (::System::Object*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_ANIMANCER.FSM.IKEYEDSTATEMACHINE_TKEY_.FORCESETSTATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Item(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Keys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_GET_KEYS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Values()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void Add(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsKey(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_CONTAINSKEY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_TKey_TState__.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TSTATE__.GET_ISREADONLY_OFFSET))(nullptr);
		}

		Il2CppObject* GetState(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_GETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_ADDRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetFakeKey(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_SETFAKEKEY_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`2_TOSTRING_OFFSET))(nullptr);
		}

	};
}

