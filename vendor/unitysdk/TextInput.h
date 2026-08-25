#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class TextField; }
namespace UnityEngine::UIElements { class EventBase; }

#define TEXTINPUT_GET_PARENTTEXTFIELD_OFFSET UNITYSDK_OFFSET(0xA3C17A0)
#define TEXTINPUT_GET_MULTILINE_OFFSET UNITYSDK_OFFSET(0xA3C1820)
#define TEXTINPUT_SET_MULTILINE_OFFSET UNITYSDK_OFFSET(0xA3C0E70)
#define TEXTINPUT_SETTEXTALIGN_OFFSET UNITYSDK_OFFSET(0xA3C1830)
#define TEXTINPUT_SET_ISPASSWORDFIELD_OFFSET UNITYSDK_OFFSET(0xA3C18F0)
#define TEXTINPUT_STRINGTOVALUE_OFFSET UNITYSDK_OFFSET(0xA3C1940)
#define TEXTINPUT_SYNCTEXTENGINE_OFFSET UNITYSDK_OFFSET(0xA3C1950)
#define TEXTINPUT_EXECUTEDEFAULTACTIONATTARGET_OFFSET UNITYSDK_OFFSET(0xA3C1A40)
#define TEXTINPUT_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0xA3C23E0)
#define TEXTINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C11F0)

	inline static constexpr unsigned int TextInput_TypeDefinitionIndex = 30391;

	class TextInput : public Enumerator
	{
	public:
		::System::Boolean m_Multiline; // 0x410

		::UnityEngine::UIElements::TextField* get_parentTextField()
		{
			return (return (::UnityEngine::UIElements::TextField*(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUT_GET_PARENTTEXTFIELD_OFFSET))(nullptr);
		}

		::System::Boolean get_multiline()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUT_GET_MULTILINE_OFFSET))(nullptr);
		}

		::System::Void set_multiline(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUT_SET_MULTILINE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTextAlign()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUT_SETTEXTALIGN_OFFSET))(nullptr);
		}

		::System::Void set_isPasswordField(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUT_SET_ISPASSWORDFIELD_OFFSET))(arg, nullptr);
		}

		::System::String* StringToValue(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUT_STRINGTOVALUE_OFFSET))(str, nullptr);
		}

		::System::Void SyncTextEngine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUT_SYNCTEXTENGINE_OFFSET))(nullptr);
		}

		::System::Void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUT_EXECUTEDEFAULTACTIONATTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUT_EXECUTEDEFAULTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUT_.CTOR_OFFSET))(nullptr);
		}

	};

