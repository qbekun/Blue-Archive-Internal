#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_OFFSET UNITYSDK_OFFSET(0xA231170)
#define UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_OFFSET UNITYSDK_OFFSET(0xA2311F0)
#define UNITYENGINE_MONOBEHAVIOUR_INVOKE_OFFSET UNITYSDK_OFFSET(0xA231270)
#define UNITYENGINE_MONOBEHAVIOUR_INVOKEREPEATING_OFFSET UNITYSDK_OFFSET(0xA231320)
#define UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_OFFSET UNITYSDK_OFFSET(0xA231460)
#define UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_OFFSET UNITYSDK_OFFSET(0xA2314E0)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0xA231560)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0xA231570)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0xA231710)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_AUTO_OFFSET UNITYSDK_OFFSET(0xA231850)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0xA231860)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0xA2319A0)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0xA231AE0)
#define UNITYENGINE_MONOBEHAVIOUR_STOPALLCOROUTINES_OFFSET UNITYSDK_OFFSET(0xA231B20)
#define UNITYENGINE_MONOBEHAVIOUR_GET_USEGUILAYOUT_OFFSET UNITYSDK_OFFSET(0xA231B60)
#define UNITYENGINE_MONOBEHAVIOUR_SET_USEGUILAYOUT_OFFSET UNITYSDK_OFFSET(0xA231BA0)
#define UNITYENGINE_MONOBEHAVIOUR_PRINT_OFFSET UNITYSDK_OFFSET(0xA231BE0)
#define UNITYENGINE_MONOBEHAVIOUR_INTERNAL_CANCELINVOKEALL_OFFSET UNITYSDK_OFFSET(0xA231230)
#define UNITYENGINE_MONOBEHAVIOUR_INTERNAL_ISINVOKINGALL_OFFSET UNITYSDK_OFFSET(0xA2311B0)
#define UNITYENGINE_MONOBEHAVIOUR_INVOKEDELAYED_OFFSET UNITYSDK_OFFSET(0xA2312C0)
#define UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_OFFSET UNITYSDK_OFFSET(0xA2314A0)
#define UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_OFFSET UNITYSDK_OFFSET(0xA231520)
#define UNITYENGINE_MONOBEHAVIOUR_ISOBJECTMONOBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0xA231680)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINEMANAGED_OFFSET UNITYSDK_OFFSET(0xA2316C0)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINEMANAGED2_OFFSET UNITYSDK_OFFSET(0xA231810)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINEMANAGED_OFFSET UNITYSDK_OFFSET(0xA231AA0)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINEFROMENUMERATORMANAGED_OFFSET UNITYSDK_OFFSET(0xA231960)
#define UNITYENGINE_MONOBEHAVIOUR_GETSCRIPTCLASSNAME_OFFSET UNITYSDK_OFFSET(0xA231C30)
#define UNITYENGINE_MONOBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA231C70)

namespace UnityEngine
{
	inline static constexpr unsigned int MonoBehaviour_TypeDefinitionIndex = 31157;

	class MonoBehaviour : public Il2CppObject
	{
	public:
		::System::Boolean IsInvoking()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_OFFSET))(nullptr);
		}

		::System::Void CancelInvoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_OFFSET))(nullptr);
		}

		::System::Void Invoke(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INVOKE_OFFSET))(str, arg, nullptr);
		}

		::System::Void InvokeRepeating(::System::String* str, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INVOKEREPEATING_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void CancelInvoke(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsInvoking(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_OFFSET))(str, nullptr);
		}

		::UnityEngine::Coroutine* StartCoroutine(::System::String* str)
		{
			return (return (::UnityEngine::Coroutine*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_OFFSET))(str, nullptr);
		}

		::UnityEngine::Coroutine* StartCoroutine(::System::String* str, ::System::Object* arg)
		{
			return (return (::UnityEngine::Coroutine*(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* arg)
		{
			return (return (::UnityEngine::Coroutine*(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* StartCoroutine_Auto(::System::Collections::IEnumerator* arg)
		{
			return (return (::UnityEngine::Coroutine*(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_AUTO_OFFSET))(arg, nullptr);
		}

		::System::Void StopCoroutine(::System::Collections::IEnumerator* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void StopCoroutine(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void StopCoroutine(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_OFFSET))(str, nullptr);
		}

		::System::Void StopAllCoroutines()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPALLCOROUTINES_OFFSET))(nullptr);
		}

		::System::Boolean get_useGUILayout()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_GET_USEGUILAYOUT_OFFSET))(nullptr);
		}

		::System::Void set_useGUILayout(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_SET_USEGUILAYOUT_OFFSET))(arg, nullptr);
		}

		::System::Void print(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_PRINT_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_CancelInvokeAll(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INTERNAL_CANCELINVOKEALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean Internal_IsInvokingAll(::UnityEngine::MonoBehaviour* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INTERNAL_ISINVOKINGALL_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeDelayed(::UnityEngine::MonoBehaviour* arg, ::System::String* str, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::String*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INVOKEDELAYED_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void CancelInvoke(::UnityEngine::MonoBehaviour* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean IsInvoking(::UnityEngine::MonoBehaviour* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::UnityEngine::MonoBehaviour*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean IsObjectMonoBehaviour(::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_ISOBJECTMONOBEHAVIOUR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* StartCoroutineManaged(::System::String* str, ::System::Object* arg)
		{
			return (return (::UnityEngine::Coroutine*(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINEMANAGED_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Coroutine* StartCoroutineManaged2(::System::Collections::IEnumerator* arg)
		{
			return (return (::UnityEngine::Coroutine*(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINEMANAGED2_OFFSET))(arg, nullptr);
		}

		::System::Void StopCoroutineManaged(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINEMANAGED_OFFSET))(arg, nullptr);
		}

		::System::Void StopCoroutineFromEnumeratorManaged(::System::Collections::IEnumerator* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINEFROMENUMERATORMANAGED_OFFSET))(arg, nullptr);
		}

		::System::String* GetScriptClassName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_GETSCRIPTCLASSNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};
}

