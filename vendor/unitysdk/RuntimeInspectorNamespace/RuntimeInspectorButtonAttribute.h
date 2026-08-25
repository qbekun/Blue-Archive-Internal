#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class ButtonVisibility; }

#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORBUTTONATTRIBUTE_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x9567BD0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORBUTTONATTRIBUTE_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x9567BE0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORBUTTONATTRIBUTE_GET_ISINITIALIZER_OFFSET UNITYSDK_OFFSET(0x9567BF0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORBUTTONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9567C00)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int RuntimeInspectorButtonAttribute_TypeDefinitionIndex = 35642;

	class RuntimeInspectorButtonAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* m_label; // 0x10
		::System::Boolean m_isInitializer; // 0x18
		::RuntimeInspectorNamespace::ButtonVisibility* m_visibility; // 0x1C

		::RuntimeInspectorNamespace::ButtonVisibility* get_Visibility()
		{
			return (return (::RuntimeInspectorNamespace::ButtonVisibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORBUTTONATTRIBUTE_GET_VISIBILITY_OFFSET))(nullptr);
		}

		::System::String* get_Label()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORBUTTONATTRIBUTE_GET_LABEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInitializer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORBUTTONATTRIBUTE_GET_ISINITIALIZER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::RuntimeInspectorNamespace::ButtonVisibility* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::RuntimeInspectorNamespace::ButtonVisibility*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORBUTTONATTRIBUTE_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

