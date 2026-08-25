#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA { class NXToyIntegrationTestCode; }

#define NPA_EDITOR_NXPLOGGER_DD_OFFSET UNITYSDK_OFFSET(0x9D50550)
#define NPA_EDITOR_NXPLOGGER_V_OFFSET UNITYSDK_OFFSET(0x9D50920)
#define NPA_EDITOR_NXPLOGGER_D_OFFSET UNITYSDK_OFFSET(0x9D50A70)
#define NPA_EDITOR_NXPLOGGER_I_OFFSET UNITYSDK_OFFSET(0x9D46540)
#define NPA_EDITOR_NXPLOGGER_W_OFFSET UNITYSDK_OFFSET(0x9D50BC0)
#define NPA_EDITOR_NXPLOGGER_E_CODE_OFFSET UNITYSDK_OFFSET(0x9D50D10)
#define NPA_EDITOR_NXPLOGGER_E_INFO_OFFSET UNITYSDK_OFFSET(0x9D50F50)
#define NPA_EDITOR_NXPLOGGER_IT_OFFSET UNITYSDK_OFFSET(0x9D51130)
#define NPA_EDITOR_NXPLOGGER_IT_OFFSET UNITYSDK_OFFSET(0x9D512E0)
#define NPA_EDITOR_NXPLOGGER_SETSENDTOSERVER_OFFSET UNITYSDK_OFFSET(0x9D51490)
#define NPA_EDITOR_NXPLOGGER_GETSTACKTRACEINFOJSON_OFFSET UNITYSDK_OFFSET(0x9D506A0)
#define NPA_EDITOR_NXPLOGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D51530)
#define NPA_EDITOR_NXPLOGGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D51540)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPLogger_TypeDefinitionIndex = 26179;

	class NXPLogger : public Il2CppObject
	{
	public:
		::System::Int32 defaultSkipFrames; // 0x0

		::System::Void DD(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGER_DD_OFFSET))(str, arg, nullptr);
		}

		::System::Void V(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGER_V_OFFSET))(str, arg, nullptr);
		}

		::System::Void D(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGER_D_OFFSET))(str, arg, nullptr);
		}

		::System::Void I(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGER_I_OFFSET))(str, arg, nullptr);
		}

		::System::Void W(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGER_W_OFFSET))(str, arg, nullptr);
		}

		::System::Void E_CODE(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGER_E_CODE_OFFSET))(str, str, nullptr);
		}

		::System::Void E_INFO(::System::String* str, Il2CppObject* arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGER_E_INFO_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void IT(::NPA::NXToyIntegrationTestCode* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::NXToyIntegrationTestCode*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGER_IT_OFFSET))(arg, str, nullptr);
		}

		::System::Void IT(::NPA::NXToyIntegrationTestCode* arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::NPA::NXToyIntegrationTestCode*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGER_IT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SetSendToServer(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGER_SETSENDTOSERVER_OFFSET))(arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* GetStackTraceInfoJson(::System::Int32 arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGER_GETSTACKTRACEINFOJSON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

