#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class BoundInputField; }
namespace UnityEngine::UI { class Text; }

#define RUNTIMEINSPECTORNAMESPACE_RECTFIELD_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9577570)
#define RUNTIMEINSPECTORNAMESPACE_RECTFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95778C0)
#define RUNTIMEINSPECTORNAMESPACE_RECTFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x9577E90)
#define RUNTIMEINSPECTORNAMESPACE_RECTFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x9577F50)
#define RUNTIMEINSPECTORNAMESPACE_RECTFIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x95782D0)
#define RUNTIMEINSPECTORNAMESPACE_RECTFIELD_GET_HEIGHTMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9578650)
#define RUNTIMEINSPECTORNAMESPACE_RECTFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x9578660)
#define RUNTIMEINSPECTORNAMESPACE_RECTFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9578BB0)
#define RUNTIMEINSPECTORNAMESPACE_RECTFIELD_ONVALUESUBMITTED_OFFSET UNITYSDK_OFFSET(0x9578BD0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int RectField_TypeDefinitionIndex = 35671;

	class RectField : public Il2CppObject
	{
	public:
		::RuntimeInspectorNamespace::BoundInputField* inputX; // 0x78
		::RuntimeInspectorNamespace::BoundInputField* inputY; // 0x80
		::RuntimeInspectorNamespace::BoundInputField* inputW; // 0x88
		::RuntimeInspectorNamespace::BoundInputField* inputH; // 0x90
		::UnityEngine::UI::Text* labelX; // 0x98
		::UnityEngine::UI::Text* labelY; // 0xA0
		::UnityEngine::UI::Text* labelW; // 0xA8
		::UnityEngine::UI::Text* labelH; // 0xB0
		::System::Boolean isRectInt; // 0xB8

		::System::Boolean OnValueChanged(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECTFIELD_ONVALUECHANGED_OFFSET))(arg, str, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECTFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECTFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECTFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECTFIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Single get_HeightMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECTFIELD_GET_HEIGHTMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECTFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECTFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean OnValueSubmitted(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECTFIELD_ONVALUESUBMITTED_OFFSET))(arg, str, nullptr);
		}

	};
}

