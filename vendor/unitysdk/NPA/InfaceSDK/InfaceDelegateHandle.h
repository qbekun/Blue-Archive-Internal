#pragma once
#include "../../unitysdk.h"

namespace NPA::InfaceSDK { class InfaceDelegateHandle; }
namespace NPA::InfaceSDK { class EConstructType; }

#define NPA_INFACESDK_INFACEDELEGATEHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9CFB460)
#define NPA_INFACESDK_INFACEDELEGATEHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFB470)
#define NPA_INFACESDK_INFACEDELEGATEHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFB4C0)
#define NPA_INFACESDK_INFACEDELEGATEHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9CFB4D0)
#define NPA_INFACESDK_INFACEDELEGATEHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9CFB4E0)
#define NPA_INFACESDK_INFACEDELEGATEHANDLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9CFB4F0)
#define NPA_INFACESDK_INFACEDELEGATEHANDLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9CFB510)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int InfaceDelegateHandle_TypeDefinitionIndex = 25830;

	class InfaceDelegateHandle : public Il2CppObject
	{
	public:
		::System::Int32 handle; // 0x10
		::System::Int32 LastHandle; // 0x0

		::System::Int32 op_Implicit(::NPA::InfaceSDK::InfaceDelegateHandle* arg)
		{
			return (return (::System::Int32(*)(::NPA::InfaceSDK::InfaceDelegateHandle*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_INFACEDELEGATEHANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::NPA::InfaceSDK::EConstructType* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::EConstructType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_INFACEDELEGATEHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_INFACEDELEGATEHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::InfaceSDK::InfaceDelegateHandle* arg)
		{
			return (return (::System::Boolean(*)(::NPA::InfaceSDK::InfaceDelegateHandle*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_INFACEDELEGATEHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_INFACEDELEGATEHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::InfaceSDK::InfaceDelegateHandle* arg)
		{
			return (return (::System::Int32(*)(::NPA::InfaceSDK::InfaceDelegateHandle*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_INFACEDELEGATEHANDLE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_INFACEDELEGATEHANDLE_COMPARETO_OFFSET))(arg, nullptr);
		}

	};
}

