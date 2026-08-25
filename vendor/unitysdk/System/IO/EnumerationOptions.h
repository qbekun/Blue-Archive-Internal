#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_ENUMERATIONOPTIONS_GET_COMPATIBLE_OFFSET UNITYSDK_OFFSET(0x9306180)
#define SYSTEM_IO_ENUMERATIONOPTIONS_GET_COMPATIBLERECURSIVE_OFFSET UNITYSDK_OFFSET(0x93061D0)
#define SYSTEM_IO_ENUMERATIONOPTIONS_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x9306220)
#define SYSTEM_IO_ENUMERATIONOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9306270)
#define SYSTEM_IO_ENUMERATIONOPTIONS_FROMSEARCHOPTION_OFFSET UNITYSDK_OFFSET(0x9304430)
#define SYSTEM_IO_ENUMERATIONOPTIONS_GET_RECURSESUBDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x9306290)
#define SYSTEM_IO_ENUMERATIONOPTIONS_SET_RECURSESUBDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x93062A0)
#define SYSTEM_IO_ENUMERATIONOPTIONS_GET_IGNOREINACCESSIBLE_OFFSET UNITYSDK_OFFSET(0x93062B0)
#define SYSTEM_IO_ENUMERATIONOPTIONS_SET_IGNOREINACCESSIBLE_OFFSET UNITYSDK_OFFSET(0x93062C0)
#define SYSTEM_IO_ENUMERATIONOPTIONS_GET_BUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x93062D0)
#define SYSTEM_IO_ENUMERATIONOPTIONS_GET_ATTRIBUTESTOSKIP_OFFSET UNITYSDK_OFFSET(0x93062E0)
#define SYSTEM_IO_ENUMERATIONOPTIONS_SET_ATTRIBUTESTOSKIP_OFFSET UNITYSDK_OFFSET(0x93062F0)
#define SYSTEM_IO_ENUMERATIONOPTIONS_GET_MATCHTYPE_OFFSET UNITYSDK_OFFSET(0x9306300)
#define SYSTEM_IO_ENUMERATIONOPTIONS_SET_MATCHTYPE_OFFSET UNITYSDK_OFFSET(0x9306310)
#define SYSTEM_IO_ENUMERATIONOPTIONS_GET_MATCHCASING_OFFSET UNITYSDK_OFFSET(0x9306320)
#define SYSTEM_IO_ENUMERATIONOPTIONS_GET_RETURNSPECIALDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x9306330)
#define SYSTEM_IO_ENUMERATIONOPTIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9306340)

namespace System::IO
{
	inline static constexpr unsigned int EnumerationOptions_TypeDefinitionIndex = 25260;

	class EnumerationOptions : public Il2CppObject
	{
	public:
		::System::IO::EnumerationOptions* _Compatible_k__BackingField; // 0x0
		::System::IO::EnumerationOptions* _CompatibleRecursive_k__BackingField; // 0x8
		::System::IO::EnumerationOptions* _Default_k__BackingField; // 0x10
		::System::Boolean _RecurseSubdirectories_k__BackingField; // 0x10
		::System::Boolean _IgnoreInaccessible_k__BackingField; // 0x11
		::System::Int32 _BufferSize_k__BackingField; // 0x14
		::System::IO::FileAttributes* _AttributesToSkip_k__BackingField; // 0x18
		::System::IO::MatchType* _MatchType_k__BackingField; // 0x1C
		::System::IO::MatchCasing* _MatchCasing_k__BackingField; // 0x20
		::System::Boolean _ReturnSpecialDirectories_k__BackingField; // 0x24

		::System::IO::EnumerationOptions* get_Compatible()
		{
			return (return (::System::IO::EnumerationOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_GET_COMPATIBLE_OFFSET))(nullptr);
		}

		::System::IO::EnumerationOptions* get_CompatibleRecursive()
		{
			return (return (::System::IO::EnumerationOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_GET_COMPATIBLERECURSIVE_OFFSET))(nullptr);
		}

		::System::IO::EnumerationOptions* get_Default()
		{
			return (return (::System::IO::EnumerationOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_.CTOR_OFFSET))(nullptr);
		}

		::System::IO::EnumerationOptions* FromSearchOption(::System::IO::SearchOption* arg)
		{
			return (return (::System::IO::EnumerationOptions*(*)(::System::IO::SearchOption*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_FROMSEARCHOPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RecurseSubdirectories()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_GET_RECURSESUBDIRECTORIES_OFFSET))(nullptr);
		}

		::System::Void set_RecurseSubdirectories(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_SET_RECURSESUBDIRECTORIES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreInaccessible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_GET_IGNOREINACCESSIBLE_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreInaccessible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_SET_IGNOREINACCESSIBLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BufferSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_GET_BUFFERSIZE_OFFSET))(nullptr);
		}

		::System::IO::FileAttributes* get_AttributesToSkip()
		{
			return (return (::System::IO::FileAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_GET_ATTRIBUTESTOSKIP_OFFSET))(nullptr);
		}

		::System::Void set_AttributesToSkip(::System::IO::FileAttributes* arg)
		{
			((::System::Void(*)(::System::IO::FileAttributes*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_SET_ATTRIBUTESTOSKIP_OFFSET))(arg, nullptr);
		}

		::System::IO::MatchType* get_MatchType()
		{
			return (return (::System::IO::MatchType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_GET_MATCHTYPE_OFFSET))(nullptr);
		}

		::System::Void set_MatchType(::System::IO::MatchType* arg)
		{
			((::System::Void(*)(::System::IO::MatchType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_SET_MATCHTYPE_OFFSET))(arg, nullptr);
		}

		::System::IO::MatchCasing* get_MatchCasing()
		{
			return (return (::System::IO::MatchCasing*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_GET_MATCHCASING_OFFSET))(nullptr);
		}

		::System::Boolean get_ReturnSpecialDirectories()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_GET_RETURNSPECIALDIRECTORIES_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATIONOPTIONS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

