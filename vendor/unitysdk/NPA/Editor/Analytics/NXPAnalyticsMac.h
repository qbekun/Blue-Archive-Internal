#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class INXPApp; }

#define NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC1DE0)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_SENDSYSTEMINFOLOG_OFFSET UNITYSDK_OFFSET(0x9CC1E50)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_SETINPUTLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x9CC1ED0)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_SETINPUTLOGOPTION_OFFSET UNITYSDK_OFFSET(0x9CC1EE0)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_GETINPUTLOGOPTION_OFFSET UNITYSDK_OFFSET(0x9CC1EF0)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_REGISTERKEYMAPINFO_OFFSET UNITYSDK_OFFSET(0x9CC1F00)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_SENDINPUTACTION_OFFSET UNITYSDK_OFFSET(0x9CC1F10)

namespace NPA::Editor::Analytics
{
	inline static constexpr unsigned int NXPAnalyticsMac_TypeDefinitionIndex = 27214;

	class NXPAnalyticsMac : public Il2CppObject
	{
	public:
		::System::Void .ctor(::NPA::Editor::Common::INXPApp* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::INXPApp*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean SendSystemInfoLog(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_SENDSYSTEMINFOLOG_OFFSET))(str, nullptr);
		}

		::System::Boolean SetInputLogLevel(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_SETINPUTLOGLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetInputLogOption(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_SETINPUTLOGOPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetInputLogOption(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_GETINPUTLOGOPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean RegisterKeymapInfo(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_REGISTERKEYMAPINFO_OFFSET))(str, arg, arg, str, nullptr);
		}

		::System::Boolean SendInputAction(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSMAC_SENDINPUTACTION_OFFSET))(str, str, nullptr);
		}

	};
}

