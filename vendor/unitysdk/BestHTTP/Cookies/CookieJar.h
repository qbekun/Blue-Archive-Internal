#pragma once
#include "../../unitysdk.h"

namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::Cookies { class Cookie; }

#define BESTHTTP_COOKIES_COOKIEJAR_GET_ISSAVINGSUPPORTED_OFFSET UNITYSDK_OFFSET(0x8F6FE0)
#define BESTHTTP_COOKIES_COOKIEJAR_GET_COOKIEFOLDER_OFFSET UNITYSDK_OFFSET(0x8F73A0)
#define BESTHTTP_COOKIES_COOKIEJAR_SET_COOKIEFOLDER_OFFSET UNITYSDK_OFFSET(0x8F73F0)
#define BESTHTTP_COOKIES_COOKIEJAR_GET_LIBRARYPATH_OFFSET UNITYSDK_OFFSET(0x8F7460)
#define BESTHTTP_COOKIES_COOKIEJAR_SET_LIBRARYPATH_OFFSET UNITYSDK_OFFSET(0x8F74B0)
#define BESTHTTP_COOKIES_COOKIEJAR_SETUPFOLDER_OFFSET UNITYSDK_OFFSET(0x8F7520)
#define BESTHTTP_COOKIES_COOKIEJAR_SET_OFFSET UNITYSDK_OFFSET(0x8F7870)
#define BESTHTTP_COOKIES_COOKIEJAR_MAINTAIN_OFFSET UNITYSDK_OFFSET(0x8F8140)
#define BESTHTTP_COOKIES_COOKIEJAR_PERSIST_OFFSET UNITYSDK_OFFSET(0x8F88F0)
#define BESTHTTP_COOKIES_COOKIEJAR_LOAD_OFFSET UNITYSDK_OFFSET(0x8F9350)
#define BESTHTTP_COOKIES_COOKIEJAR_GET_OFFSET UNITYSDK_OFFSET(0x8F9E70)
#define BESTHTTP_COOKIES_COOKIEJAR_SET_OFFSET UNITYSDK_OFFSET(0x8FA250)
#define BESTHTTP_COOKIES_COOKIEJAR_SET_OFFSET UNITYSDK_OFFSET(0x8FA2A0)
#define BESTHTTP_COOKIES_COOKIEJAR_GETALL_OFFSET UNITYSDK_OFFSET(0x8FA610)
#define BESTHTTP_COOKIES_COOKIEJAR_CLEAR_OFFSET UNITYSDK_OFFSET(0x8FA670)
#define BESTHTTP_COOKIES_COOKIEJAR_CLEAR_OFFSET UNITYSDK_OFFSET(0x8FA800)
#define BESTHTTP_COOKIES_COOKIEJAR_CLEAR_OFFSET UNITYSDK_OFFSET(0x8FAAD0)
#define BESTHTTP_COOKIES_COOKIEJAR_REMOVE_OFFSET UNITYSDK_OFFSET(0x8FAD70)
#define BESTHTTP_COOKIES_COOKIEJAR_FIND_OFFSET UNITYSDK_OFFSET(0x8F8030)
#define BESTHTTP_COOKIES_COOKIEJAR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8FB140)

namespace BestHTTP::Cookies
{
	inline static constexpr unsigned int CookieJar_TypeDefinitionIndex = 23415;

	class CookieJar : public Il2CppObject
	{
	public:
		::System::Int32 Version; // 0x0
		::System::TimeSpan* AccessThreshold; // 0x0
		Il2CppObject* Cookies; // 0x8
		::System::String* _CookieFolder_k__BackingField; // 0x10
		::System::String* _LibraryPath_k__BackingField; // 0x18
		::System::Threading::ReaderWriterLockSlim* rwLock; // 0x20
		::System::Boolean _isSavingSupported; // 0x28
		::System::Boolean IsSupportCheckDone; // 0x29
		::System::Boolean Loaded; // 0x2A

		::System::Boolean get_IsSavingSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_GET_ISSAVINGSUPPORTED_OFFSET))(nullptr);
		}

		::System::String* get_CookieFolder()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_GET_COOKIEFOLDER_OFFSET))(nullptr);
		}

		::System::Void set_CookieFolder(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_SET_COOKIEFOLDER_OFFSET))(str, nullptr);
		}

		::System::String* get_LibraryPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_GET_LIBRARYPATH_OFFSET))(nullptr);
		}

		::System::Void set_LibraryPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_SET_LIBRARYPATH_OFFSET))(str, nullptr);
		}

		::System::Void SetupFolder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_SETUPFOLDER_OFFSET))(nullptr);
		}

		::System::Boolean Set(::BestHTTP::HTTPResponse* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_SET_OFFSET))(arg, nullptr);
		}

		::System::Void Maintain(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_MAINTAIN_OFFSET))(arg, nullptr);
		}

		::System::Void Persist()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_PERSIST_OFFSET))(nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_LOAD_OFFSET))(nullptr);
		}

		Il2CppObject* Get(::System::Uri* arg)
		{
			return (return (Il2CppObject*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Uri* arg, ::BestHTTP::Cookies::Cookie* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::Cookies::Cookie*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Set(::BestHTTP::Cookies::Cookie* arg)
		{
			((::System::Void(*)(::BestHTTP::Cookies::Cookie*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_SET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_GETALL_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Clear(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void Clear(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_CLEAR_OFFSET))(str, nullptr);
		}

		::System::Void Remove(::System::Uri* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Uri*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_REMOVE_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::Cookies::Cookie* Find(::BestHTTP::Cookies::Cookie* arg, int32_t&* arg)
		{
			return (return (::BestHTTP::Cookies::Cookie*(*)(::BestHTTP::Cookies::Cookie*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_FIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIEJAR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

