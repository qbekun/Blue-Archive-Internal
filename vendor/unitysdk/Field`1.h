#pragma once
#include "unitysdk.h"

#define FIELD`1_GET_GETTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define FIELD`1_SET_GETTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define FIELD`1_GET_SETTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define FIELD`1_SET_SETTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define FIELD`1_UNITYENGINE.RENDERING.DEBUGUI.IVALUEFIELD.VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FIELD`1_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FIELD`1_UNITYENGINE.RENDERING.DEBUGUI.IVALUEFIELD.GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FIELD`1_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FIELD`1_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FIELD`1_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FIELD`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Field`1_TypeDefinitionIndex = 33956;

	class Field`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _getter_k__BackingField; // 0x0
		Il2CppObject* _setter_k__BackingField; // 0x0
		Il2CppObject* onValueChanged; // 0x0

		Il2CppObject* get_getter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELD`1_GET_GETTER_OFFSET))(nullptr);
		}

		::System::Void set_getter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FIELD`1_SET_GETTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_setter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELD`1_GET_SETTER_OFFSET))(nullptr);
		}

		::System::Void set_setter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FIELD`1_SET_SETTER_OFFSET))(arg, nullptr);
		}

		::System::Object* UnityEngine.Rendering.DebugUI.IValueField.ValidateValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + FIELD`1_UNITYENGINE.RENDERING.DEBUGUI.IVALUEFIELD.VALIDATEVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ValidateValue(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FIELD`1_VALIDATEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* UnityEngine.Rendering.DebugUI.IValueField.GetValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELD`1_UNITYENGINE.RENDERING.DEBUGUI.IVALUEFIELD.GETVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* GetValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELD`1_GETVALUE_OFFSET))(nullptr);
		}

		::System::Void SetValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + FIELD`1_SETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FIELD`1_SETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELD`1_.CTOR_OFFSET))(nullptr);
		}

	};

