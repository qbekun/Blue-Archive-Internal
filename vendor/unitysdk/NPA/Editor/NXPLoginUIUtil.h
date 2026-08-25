#pragma once
#include "../../unitysdk.h"

namespace NPA { class NPLoginType; }

#define NPA_EDITOR_NXPLOGINUIUTIL_GETICONBYLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x9DA5300)
#define NPA_EDITOR_NXPLOGINUIUTIL_GETNAMEBYLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x9DA5480)
#define NPA_EDITOR_NXPLOGINUIUTIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA5690)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPLoginUIUtil_TypeDefinitionIndex = 26362;

	class NXPLoginUIUtil : public Il2CppObject
	{
	public:
		::System::String* GetIconByLoginType(::NPA::NPLoginType* arg)
		{
			return (return (::System::String*(*)(::NPA::NPLoginType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGINUIUTIL_GETICONBYLOGINTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* GetNameByLoginType(::NPA::NPLoginType* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::NPA::NPLoginType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGINUIUTIL_GETNAMEBYLOGINTYPE_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGINUIUTIL_.CTOR_OFFSET))(nullptr);
		}

	};
}

