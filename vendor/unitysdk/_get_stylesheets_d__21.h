#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class VisualTreeAsset; }
namespace UnityEngine::UIElements { class VisualElementAsset; }

#define <GET_STYLESHEETS>D__21_.CTOR_OFFSET UNITYSDK_OFFSET(0xA426D40)
#define <GET_STYLESHEETS>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA42A210)
#define <GET_STYLESHEETS>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA42A390)
#define <GET_STYLESHEETS>D__21___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xA42ACB0)
#define <GET_STYLESHEETS>D__21___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xA42AC10)
#define <GET_STYLESHEETS>D__21___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0xA42AC60)
#define <GET_STYLESHEETS>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.UIELEMENTS.STYLESHEET_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA42AD00)
#define <GET_STYLESHEETS>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA42AD10)
#define <GET_STYLESHEETS>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA42AD60)
#define <GET_STYLESHEETS>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.UIELEMENTS.STYLESHEET_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA42AD70)
#define <GET_STYLESHEETS>D__21_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA42AE30)

	inline static constexpr unsigned int <get_stylesheets>d__21_TypeDefinitionIndex = 30707;

	class <get_stylesheets>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::UIElements::StyleSheet* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::UnityEngine::UIElements::VisualTreeAsset* __4__this; // 0x28
		Il2CppObject* _sent_5__1; // 0x30
		Il2CppObject* __s__2; // 0x38
		::UnityEngine::UIElements::VisualElementAsset* _vea_5__3; // 0x50
		Il2CppObject* __s__4; // 0x58
		::UnityEngine::UIElements::StyleSheet* _stylesheet_5__5; // 0x70
		Il2CppObject* __s__6; // 0x78
		::System::String* _stylesheetPath_5__7; // 0x90
		::UnityEngine::UIElements::StyleSheet* _stylesheet_5__8; // 0x98

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_STYLESHEETS>D__21_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_STYLESHEETS>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_STYLESHEETS>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_STYLESHEETS>D__21___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_STYLESHEETS>D__21___M__FINALLY2_OFFSET))(nullptr);
		}

		::System::Void __m__Finally3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_STYLESHEETS>D__21___M__FINALLY3_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleSheet* System.Collections.Generic.IEnumerator_UnityEngine.UIElements.StyleSheet_.get_Current()
		{
			return (return (::UnityEngine::UIElements::StyleSheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_STYLESHEETS>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.UIELEMENTS.STYLESHEET_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_STYLESHEETS>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_STYLESHEETS>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.UIElements.StyleSheet_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_STYLESHEETS>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.UIELEMENTS.STYLESHEET_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_STYLESHEETS>D__21_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

