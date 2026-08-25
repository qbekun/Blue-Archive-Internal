#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Service { class NXPBuildVersion; }

#define NPA_EDITOR_SERVICE_NXPBUILDVERSION_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9BFD8B0)
#define NPA_EDITOR_SERVICE_NXPBUILDVERSION_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9BFD910)
#define NPA_EDITOR_SERVICE_NXPBUILDVERSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9BFD930)
#define NPA_EDITOR_SERVICE_NXPBUILDVERSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9BFD940)
#define NPA_EDITOR_SERVICE_NXPBUILDVERSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9BFD950)
#define NPA_EDITOR_SERVICE_NXPBUILDVERSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9BFD9D0)
#define NPA_EDITOR_SERVICE_NXPBUILDVERSION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9BFD9E0)
#define NPA_EDITOR_SERVICE_NXPBUILDVERSION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9BFDA30)
#define NPA_EDITOR_SERVICE_NXPBUILDVERSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BFDA80)
#define NPA_EDITOR_SERVICE_NXPBUILDVERSION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9BFDA90)
#define NPA_EDITOR_SERVICE_NXPBUILDVERSION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9BFDAA0)
#define NPA_EDITOR_SERVICE_NXPBUILDVERSION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BFDAC0)

namespace NPA::Editor::Service
{
	inline static constexpr unsigned int NXPBuildVersion_TypeDefinitionIndex = 26511;

	class NXPBuildVersion : public Il2CppObject
	{
	public:
		::System::Int32 _innerValue; // 0x10
		::NPA::Editor::Service::NXPBuildVersion* NotUsed; // 0x0
		::NPA::Editor::Service::NXPBuildVersion* Dev; // 0x4
		::NPA::Editor::Service::NXPBuildVersion* Stage; // 0x8
		::NPA::Editor::Service::NXPBuildVersion* Live; // 0xC

		::System::Int32 CompareTo(::NPA::Editor::Service::NXPBuildVersion* arg)
		{
			return (return (::System::Int32(*)(::NPA::Editor::Service::NXPBuildVersion*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPBUILDVERSION_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPBUILDVERSION_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Editor::Service::NXPBuildVersion* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::Service::NXPBuildVersion*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPBUILDVERSION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPBUILDVERSION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPBUILDVERSION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPBUILDVERSION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::NPA::Editor::Service::NXPBuildVersion* arg, ::NPA::Editor::Service::NXPBuildVersion* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::Service::NXPBuildVersion*, ::NPA::Editor::Service::NXPBuildVersion*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPBUILDVERSION_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Editor::Service::NXPBuildVersion* arg, ::NPA::Editor::Service::NXPBuildVersion* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::Service::NXPBuildVersion*, ::NPA::Editor::Service::NXPBuildVersion*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPBUILDVERSION_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPBUILDVERSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Implicit(::NPA::Editor::Service::NXPBuildVersion* arg)
		{
			return (return (::System::Int32(*)(::NPA::Editor::Service::NXPBuildVersion*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPBUILDVERSION_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* op_Implicit(::NPA::Editor::Service::NXPBuildVersion* arg)
		{
			return (return (::System::String*(*)(::NPA::Editor::Service::NXPBuildVersion*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPBUILDVERSION_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPBUILDVERSION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

