#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualTreeAsset; }

#define <GET_TEMPLATEDEPENDENCIES>D__17_.CTOR_OFFSET UNITYSDK_OFFSET(0xA426C70)
#define <GET_TEMPLATEDEPENDENCIES>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA429A40)
#define <GET_TEMPLATEDEPENDENCIES>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA429AB0)
#define <GET_TEMPLATEDEPENDENCIES>D__17___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xA42A080)
#define <GET_TEMPLATEDEPENDENCIES>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.UIELEMENTS.VISUALTREEASSET_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA42A0D0)
#define <GET_TEMPLATEDEPENDENCIES>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA42A0E0)
#define <GET_TEMPLATEDEPENDENCIES>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA42A130)
#define <GET_TEMPLATEDEPENDENCIES>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.UIELEMENTS.VISUALTREEASSET_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA42A140)
#define <GET_TEMPLATEDEPENDENCIES>D__17_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA42A200)

	inline static constexpr unsigned int <get_templateDependencies>d__17_TypeDefinitionIndex = 30706;

	class <get_templateDependencies>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::UIElements::VisualTreeAsset* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::UnityEngine::UIElements::VisualTreeAsset* __4__this; // 0x28
		Il2CppObject* _sent_5__1; // 0x30
		Il2CppObject* __s__2; // 0x38
		UsingEntry* _entry_5__3; // 0x60
		::UnityEngine::UIElements::VisualTreeAsset* _vta_5__4; // 0x78

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_TEMPLATEDEPENDENCIES>D__17_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TEMPLATEDEPENDENCIES>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TEMPLATEDEPENDENCIES>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TEMPLATEDEPENDENCIES>D__17___M__FINALLY1_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualTreeAsset* System.Collections.Generic.IEnumerator_UnityEngine.UIElements.VisualTreeAsset_.get_Current()
		{
			return (return (::UnityEngine::UIElements::VisualTreeAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TEMPLATEDEPENDENCIES>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.UIELEMENTS.VISUALTREEASSET_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TEMPLATEDEPENDENCIES>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TEMPLATEDEPENDENCIES>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.UIElements.VisualTreeAsset_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TEMPLATEDEPENDENCIES>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.UIELEMENTS.VISUALTREEASSET_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TEMPLATEDEPENDENCIES>D__17_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

