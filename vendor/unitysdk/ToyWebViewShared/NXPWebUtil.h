#pragma once
#include "../unitysdk.h"

#define TOYWEBVIEWSHARED_NXPWEBUTIL_GETDIRECTORYPATH_OFFSET UNITYSDK_OFFSET(0x9BABC00)
#define TOYWEBVIEWSHARED_NXPWEBUTIL_GETFULLPATH_OFFSET UNITYSDK_OFFSET(0x9BABCA0)
#define TOYWEBVIEWSHARED_NXPWEBUTIL_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9BABD00)
#define TOYWEBVIEWSHARED_NXPWEBUTIL_DELETEALLDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9BABD30)
#define TOYWEBVIEWSHARED_NXPWEBUTIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BABDB0)

namespace ToyWebViewShared
{
	inline static constexpr unsigned int NXPWebUtil_TypeDefinitionIndex = 25402;

	class NXPWebUtil : public Il2CppObject
	{
	public:
		::System::String* GetDirectoryPath(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPWEBUTIL_GETDIRECTORYPATH_OFFSET))(str, str, str, nullptr);
		}

		::System::String* GetFullPath(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPWEBUTIL_GETFULLPATH_OFFSET))(str, str, nullptr);
		}

		::System::Void CreateDirectory(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPWEBUTIL_CREATEDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::Void DeleteAllDirectory(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPWEBUTIL_DELETEALLDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPWEBUTIL_.CTOR_OFFSET))(nullptr);
		}

	};
}

