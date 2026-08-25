#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class BoundSlider; }
namespace RuntimeInspectorNamespace { class BoundInputField; }

#define RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_CANBINDTO_OFFSET UNITYSDK_OFFSET(0x9574510)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9574590)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x95745F0)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9574700)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x9574880)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9574B10)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x9574D00)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_ONSLIDERVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9575090)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int NumberRangeField_TypeDefinitionIndex = 35667;

	class NumberRangeField : public Il2CppObject
	{
	public:
		::RuntimeInspectorNamespace::BoundSlider* slider; // 0x88

		::System::Boolean CanBindTo(::System::Type* arg, ::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_CANBINDTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean OnValueChanged(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_ONVALUECHANGED_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Void OnSliderValueChanged(::RuntimeInspectorNamespace::BoundSlider* arg, ::System::Single arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::BoundSlider*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERRANGEFIELD_ONSLIDERVALUECHANGED_OFFSET))(arg, arg, nullptr);
		}

	};
}

