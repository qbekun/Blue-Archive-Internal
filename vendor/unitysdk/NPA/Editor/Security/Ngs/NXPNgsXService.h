#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_ONNGSIMPL_OFFSET UNITYSDK_OFFSET(0x9C00CA0)
#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_ONNGSDETECTIMPL_OFFSET UNITYSDK_OFFSET(0x9C01210)
#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_ONINIT_OFFSET UNITYSDK_OFFSET(0x9C01780)
#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_ONRUN_OFFSET UNITYSDK_OFFSET(0x9C018C0)
#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_ONDETECT_OFFSET UNITYSDK_OFFSET(0x9C01930)
#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C019A0)
#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x9C02050)
#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_LOADFUNCTIONS_OFFSET UNITYSDK_OFFSET(0x9C01E00)
#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_INIT_OFFSET UNITYSDK_OFFSET(0x9C02720)
#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_RUN_OFFSET UNITYSDK_OFFSET(0x9C02A10)
#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_CLOSE_OFFSET UNITYSDK_OFFSET(0x9C023F0)
#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_GETVERSION_OFFSET UNITYSDK_OFFSET(0x9C032A0)
#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_SETDETECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C03540)
#define NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_CREATETIMEMESSAGE_OFFSET UNITYSDK_OFFSET(0x9C03070)

namespace NPA::Editor::Security::Ngs
{
	inline static constexpr unsigned int NXPNgsXService_TypeDefinitionIndex = 26538;

	class NXPNgsXService : public Il2CppObject
	{
	public:
		Il2CppObject* _commonAction; // 0x0
		Il2CppObject* _detectAction; // 0x8
		::System::Int32 _ngsHandle; // 0x10
		::System::Int32 _initVtable; // 0x18
		::System::Int32 _initListener; // 0x20
		::System::Int32 _runVtable; // 0x28
		::System::Int32 _runListener; // 0x30
		::System::Int32 _detectVtable; // 0x38
		::System::Int32 _detectListener; // 0x40

		::System::Void OnNgsImpl(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_ONNGSIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnNgsDetectImpl(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_ONNGSDETECTIMPL_OFFSET))(arg, arg, nullptr);
		}

		OnNgsDelegate* OnInit()
		{
			return (return (OnNgsDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_ONINIT_OFFSET))(nullptr);
		}

		OnNgsDelegate* OnRun()
		{
			return (return (OnNgsDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_ONRUN_OFFSET))(nullptr);
		}

		OnNgsDelegate* OnDetect()
		{
			return (return (OnNgsDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_ONDETECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void TearDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_TEARDOWN_OFFSET))(nullptr);
		}

		::System::Boolean LoadFunctions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_LOADFUNCTIONS_OFFSET))(nullptr);
		}

		::System::Boolean Init(::System::String* str, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_INIT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Run(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_RUN_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean Close(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::String* GetVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_GETVERSION_OFFSET))(nullptr);
		}

		::System::Boolean SetDetectCallback(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_SETDETECTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::String* CreateTimeMessage(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_NGS_NXPNGSXSERVICE_CREATETIMEMESSAGE_OFFSET))(str, nullptr);
		}

	};
}

