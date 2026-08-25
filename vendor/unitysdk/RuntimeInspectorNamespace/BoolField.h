#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Toggle; }

#define RUNTIMEINSPECTORNAMESPACE_BOOLFIELD_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x956A010)
#define RUNTIMEINSPECTORNAMESPACE_BOOLFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x956A080)
#define RUNTIMEINSPECTORNAMESPACE_BOOLFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x956A100)
#define RUNTIMEINSPECTORNAMESPACE_BOOLFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x956A1B0)
#define RUNTIMEINSPECTORNAMESPACE_BOOLFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x956A220)
#define RUNTIMEINSPECTORNAMESPACE_BOOLFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x956A370)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int BoolField_TypeDefinitionIndex = 35648;

	class BoolField : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Image* toggleBackground; // 0x78
		::UnityEngine::UI::Toggle* input; // 0x80

		::System::Void OnValueChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOOLFIELD_ONVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOOLFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOOLFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOOLFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOOLFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOOLFIELD_.CTOR_OFFSET))(nullptr);
		}

	};
}

