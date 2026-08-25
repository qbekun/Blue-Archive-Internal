#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class NXPatchFileState; }
namespace Nexon::Pub { class Resource; }

#define NEXON_PUB_NXPATCHFILE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x954C410)
#define NEXON_PUB_NXPATCHFILE_SET_URL_OFFSET UNITYSDK_OFFSET(0x954C420)
#define NEXON_PUB_NXPATCHFILE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x954C430)
#define NEXON_PUB_NXPATCHFILE_GET_DOWNLOADEDSIZE_OFFSET UNITYSDK_OFFSET(0x954C440)
#define NEXON_PUB_NXPATCHFILE_SET_DOWNLOADEDSIZE_OFFSET UNITYSDK_OFFSET(0x954C450)
#define NEXON_PUB_NXPATCHFILE_GET_HASH_OFFSET UNITYSDK_OFFSET(0x954C460)
#define NEXON_PUB_NXPATCHFILE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x954C470)
#define NEXON_PUB_NXPATCHFILE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x954C480)
#define NEXON_PUB_NXPATCHFILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C490)

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXPatchFile_TypeDefinitionIndex = 37546;

	class NXPatchFile : public Il2CppObject
	{
	public:
		::System::String* _name; // 0x10
		::System::String* _url; // 0x18
		::System::Int64 _size; // 0x20
		::System::Int64 _downloadedSize; // 0x28
		::System::String* _hash; // 0x30
		::Nexon::Pub::NXPatchFileState* _state; // 0x38

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHFILE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Url(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHFILE_SET_URL_OFFSET))(str, nullptr);
		}

		::System::Int64 get_Size()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHFILE_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_DownloadedSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHFILE_GET_DOWNLOADEDSIZE_OFFSET))(nullptr);
		}

		::System::Void set_DownloadedSize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHFILE_SET_DOWNLOADEDSIZE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Hash()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHFILE_GET_HASH_OFFSET))(nullptr);
		}

		::Nexon::Pub::NXPatchFileState* get_State()
		{
			return (return (::Nexon::Pub::NXPatchFileState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHFILE_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::Nexon::Pub::NXPatchFileState* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatchFileState*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHFILE_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Nexon::Pub::Resource* arg)
		{
			((::System::Void(*)(::Nexon::Pub::Resource*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHFILE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

