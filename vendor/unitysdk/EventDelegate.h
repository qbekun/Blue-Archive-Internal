#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MonoBehaviour; }
class Callback;
class EventDelegate;

#define EVENTDELEGATE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xA47CA0)
#define EVENTDELEGATE_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xA47CB0)
#define EVENTDELEGATE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0xA47D20)
#define EVENTDELEGATE_SET_METHODNAME_OFFSET UNITYSDK_OFFSET(0xA47D30)
#define EVENTDELEGATE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0xA47DA0)
#define EVENTDELEGATE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA485E0)
#define EVENTDELEGATE_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xA48680)
#define EVENTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48770)
#define EVENTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48780)
#define EVENTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48A00)
#define EVENTDELEGATE_GETMETHODNAME_OFFSET UNITYSDK_OFFSET(0xA48BB0)
#define EVENTDELEGATE_ISVALID_OFFSET UNITYSDK_OFFSET(0xA48BF0)
#define EVENTDELEGATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA48C20)
#define EVENTDELEGATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA48E20)
#define EVENTDELEGATE_SET_OFFSET UNITYSDK_OFFSET(0xA487B0)
#define EVENTDELEGATE_SET_OFFSET UNITYSDK_OFFSET(0xA48AE0)
#define EVENTDELEGATE_CACHE_OFFSET UNITYSDK_OFFSET(0xA47DC0)
#define EVENTDELEGATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA48F10)
#define EVENTDELEGATE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA48E70)
#define EVENTDELEGATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA49710)
#define EVENTDELEGATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA330A0)
#define EVENTDELEGATE_ISVALID_OFFSET UNITYSDK_OFFSET(0xA33000)
#define EVENTDELEGATE_SET_OFFSET UNITYSDK_OFFSET(0xA49850)
#define EVENTDELEGATE_SET_OFFSET UNITYSDK_OFFSET(0xA49970)
#define EVENTDELEGATE_ADD_OFFSET UNITYSDK_OFFSET(0xA35E80)
#define EVENTDELEGATE_ADD_OFFSET UNITYSDK_OFFSET(0xA49A50)
#define EVENTDELEGATE_ADD_OFFSET UNITYSDK_OFFSET(0xA49C00)
#define EVENTDELEGATE_ADD_OFFSET UNITYSDK_OFFSET(0xA49C70)
#define EVENTDELEGATE_REMOVE_OFFSET UNITYSDK_OFFSET(0xA353F0)
#define EVENTDELEGATE_REMOVE_OFFSET UNITYSDK_OFFSET(0xA49FB0)
#define EVENTDELEGATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4A070)

	inline static constexpr unsigned int EventDelegate_TypeDefinitionIndex = 103;

	class EventDelegate : public Il2CppObject
	{
	public:
		::UnityEngine::MonoBehaviour* mTarget; // 0x10
		::System::String* mMethodName; // 0x18
		::Il2CppArray<::System::Object*>* mParameters; // 0x20
		::System::Boolean oneShot; // 0x28
		Callback* mCachedCallback; // 0x30
		::System::Boolean mRawDelegate; // 0x38
		::System::Boolean mCached; // 0x39
		::System::Reflection::MethodInfo* mMethod; // 0x40
		::Il2CppArray<::System::Object*>* mParameterInfos; // 0x48
		::Il2CppArray<::System::Object*>* mArgs; // 0x50
		::System::Int32 s_Hash; // 0x0

		::UnityEngine::MonoBehaviour* get_target()
		{
			return ((::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void set_target(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::String* get_methodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_GET_METHODNAME_OFFSET))(nullptr);
		}

		::System::Void set_methodName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_SET_METHODNAME_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_parameters()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_isEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_GET_ISENABLED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Callback* arg)
		{
			((::System::Void(*)(Callback*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::MonoBehaviour* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetMethodName(Callback* arg)
		{
			return ((::System::String*(*)(Callback*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_GETMETHODNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid(Callback* arg)
		{
			return ((::System::Boolean(*)(Callback*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void Set(Callback* arg)
		{
			((::System::Void(*)(Callback*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_SET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::UnityEngine::MonoBehaviour* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_SET_OFFSET))(arg, str, nullptr);
		}

		::System::Void Cache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_CACHE_OFFSET))(nullptr);
		}

		::System::Boolean Execute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_CLEAR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Execute(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_ISVALID_OFFSET))(arg, nullptr);
		}

		EventDelegate* Set(Il2CppObject* arg, Callback* arg2)
		{
			return ((EventDelegate*(*)(Il2CppObject*, Callback*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_SET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Set(Il2CppObject* arg, EventDelegate* arg2)
		{
			((::System::Void(*)(Il2CppObject*, EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_SET_OFFSET))(arg, arg2, nullptr);
		}

		EventDelegate* Add(Il2CppObject* arg, Callback* arg2)
		{
			return ((EventDelegate*(*)(Il2CppObject*, Callback*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_ADD_OFFSET))(arg, arg2, nullptr);
		}

		EventDelegate* Add(Il2CppObject* arg, Callback* arg2, ::System::Boolean arg3)
		{
			return ((EventDelegate*(*)(Il2CppObject*, Callback*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_ADD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Add(Il2CppObject* arg, EventDelegate* arg2)
		{
			((::System::Void(*)(Il2CppObject*, EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_ADD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(Il2CppObject* arg, EventDelegate* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(Il2CppObject*, EventDelegate*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_ADD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg, Callback* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Callback*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_REMOVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg, EventDelegate* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_REMOVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDELEGATE_.CCTOR_OFFSET))(nullptr);
		}

	};

