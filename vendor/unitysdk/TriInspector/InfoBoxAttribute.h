#pragma once
#include "../unitysdk.h"

namespace TriInspector { class TriMessageType; }

#define TRIINSPECTOR_INFOBOXATTRIBUTE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x9DCEF80)
#define TRIINSPECTOR_INFOBOXATTRIBUTE_GET_VISIBLEIF_OFFSET UNITYSDK_OFFSET(0x9DCEF90)
#define TRIINSPECTOR_INFOBOXATTRIBUTE_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x9DCEFA0)
#define TRIINSPECTOR_INFOBOXATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEFB0)

namespace TriInspector
{
	inline static constexpr unsigned int InfoBoxAttribute_TypeDefinitionIndex = 37838;

	class InfoBoxAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10
		::TriInspector::TriMessageType* _MessageType_k__BackingField; // 0x18
		::System::String* _VisibleIf_k__BackingField; // 0x20

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INFOBOXATTRIBUTE_GET_TEXT_OFFSET))(nullptr);
		}

		::System::String* get_VisibleIf()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INFOBOXATTRIBUTE_GET_VISIBLEIF_OFFSET))(nullptr);
		}

		::TriInspector::TriMessageType* get_MessageType()
		{
			return (return (::TriInspector::TriMessageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INFOBOXATTRIBUTE_GET_MESSAGETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::TriInspector::TriMessageType* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::TriInspector::TriMessageType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INFOBOXATTRIBUTE_.CTOR_OFFSET))(str, arg, str, nullptr);
		}

	};
}

