#pragma once
#include "../unitysdk.h"

#define SYSTEM_TERMINFODRIVER_TRYTERMINFODIR_OFFSET UNITYSDK_OFFSET(0x93BEF60)
#define SYSTEM_TERMINFODRIVER_SEARCHTERMINFO_OFFSET UNITYSDK_OFFSET(0x93BF080)
#define SYSTEM_TERMINFODRIVER_WRITECONSOLE_OFFSET UNITYSDK_OFFSET(0x93BF210)
#define SYSTEM_TERMINFODRIVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B5420)
#define SYSTEM_TERMINFODRIVER_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x93BF5B0)
#define SYSTEM_TERMINFODRIVER_INIT_OFFSET UNITYSDK_OFFSET(0x93BF5C0)
#define SYSTEM_TERMINFODRIVER_INCREMENTX_OFFSET UNITYSDK_OFFSET(0x93C0560)
#define SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_OFFSET UNITYSDK_OFFSET(0x93C0640)
#define SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_OFFSET UNITYSDK_OFFSET(0x93C0A70)
#define SYSTEM_TERMINFODRIVER_ISSPECIALKEY_OFFSET UNITYSDK_OFFSET(0x93C0D00)
#define SYSTEM_TERMINFODRIVER_ISSPECIALKEY_OFFSET UNITYSDK_OFFSET(0x93C0DD0)
#define SYSTEM_TERMINFODRIVER_GETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x93C0270)
#define SYSTEM_TERMINFODRIVER_CHECKWINDOWDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x93C1010)
#define SYSTEM_TERMINFODRIVER_GET_WINDOWHEIGHT_OFFSET UNITYSDK_OFFSET(0x93C0610)
#define SYSTEM_TERMINFODRIVER_GET_WINDOWWIDTH_OFFSET UNITYSDK_OFFSET(0x93C05E0)
#define SYSTEM_TERMINFODRIVER_ADDTOBUFFER_OFFSET UNITYSDK_OFFSET(0x93C0F30)
#define SYSTEM_TERMINFODRIVER_ADJUSTBUFFER_OFFSET UNITYSDK_OFFSET(0x93C12A0)
#define SYSTEM_TERMINFODRIVER_CREATEKEYINFOFROMINT_OFFSET UNITYSDK_OFFSET(0x93C0BD0)
#define SYSTEM_TERMINFODRIVER_GETKEYFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x93C12C0)
#define SYSTEM_TERMINFODRIVER_READKEYINTERNAL_OFFSET UNITYSDK_OFFSET(0x93C1D00)
#define SYSTEM_TERMINFODRIVER_INPUTPENDING_OFFSET UNITYSDK_OFFSET(0x93C2290)
#define SYSTEM_TERMINFODRIVER_QUEUEECHO_OFFSET UNITYSDK_OFFSET(0x93C22D0)
#define SYSTEM_TERMINFODRIVER_ECHO_OFFSET UNITYSDK_OFFSET(0x93C2410)
#define SYSTEM_TERMINFODRIVER_ECHOFLUSH_OFFSET UNITYSDK_OFFSET(0x93C24B0)
#define SYSTEM_TERMINFODRIVER_READ_OFFSET UNITYSDK_OFFSET(0x93C2500)
#define SYSTEM_TERMINFODRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x93C28A0)
#define SYSTEM_TERMINFODRIVER_READLINE_OFFSET UNITYSDK_OFFSET(0x93C29F0)
#define SYSTEM_TERMINFODRIVER_READTOEND_OFFSET UNITYSDK_OFFSET(0x93C2CE0)
#define SYSTEM_TERMINFODRIVER_READUNTILCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x93C2A00)
#define SYSTEM_TERMINFODRIVER_SETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x93C0810)
#define SYSTEM_TERMINFODRIVER_CREATEKEYMAP_OFFSET UNITYSDK_OFFSET(0x93C2EE0)
#define SYSTEM_TERMINFODRIVER_INITKEYS_OFFSET UNITYSDK_OFFSET(0x93C20F0)
#define SYSTEM_TERMINFODRIVER_ADDSTRINGMAPPING_OFFSET UNITYSDK_OFFSET(0x93C5BC0)
#define SYSTEM_TERMINFODRIVER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93C5EA0)

namespace System
{
	inline static constexpr unsigned int TermInfoDriver_TypeDefinitionIndex = 23991;

	class TermInfoDriver : public Il2CppObject
	{
	public:
		::System::Object** native_terminal_size; // 0x0
		::System::Int32 terminal_size; // 0x8
		::Il2CppArray<::System::Object*>* locations; // 0x10
		::System::TermInfoReader* reader; // 0x10
		::System::Int32 cursorLeft; // 0x18
		::System::Int32 cursorTop; // 0x1C
		::System::String* title; // 0x20
		::System::String* titleFormat; // 0x28
		::System::Boolean cursorVisible; // 0x30
		::System::String* csrVisible; // 0x38
		::System::String* csrInvisible; // 0x40
		::System::String* clear; // 0x48
		::System::String* bell; // 0x50
		::System::String* term; // 0x58
		::System::IO::StreamReader* stdin; // 0x60
		::System::IO::CStreamWriter* stdout; // 0x68
		::System::Int32 windowWidth; // 0x70
		::System::Int32 windowHeight; // 0x74
		::System::Int32 bufferHeight; // 0x78
		::System::Int32 bufferWidth; // 0x7C
		::Il2CppArray<::System::Object*>* buffer; // 0x80
		::System::Int32 readpos; // 0x88
		::System::Int32 writepos; // 0x8C
		::System::String* keypadXmit; // 0x90
		::System::String* keypadLocal; // 0x98
		::System::Boolean inited; // 0xA0
		::System::Object* initLock; // 0xA8
		::System::Boolean initKeys; // 0xB0
		::System::String* origPair; // 0xB8
		::System::String* origColors; // 0xC0
		::System::String* cursorAddress; // 0xC8
		::System::ConsoleColor* fgcolor; // 0xD0
		::System::String* setfgcolor; // 0xD8
		::System::String* setbgcolor; // 0xE0
		::System::Int32 maxColors; // 0xE8
		::System::Boolean noGetPosition; // 0xEC
		::System::Collections::Hashtable* keymap; // 0xF0
		::System::ByteMatcher* rootmap; // 0xF8
		::System::Int32 rl_startx; // 0x100
		::System::Int32 rl_starty; // 0x104
		::Il2CppArray<::System::Object*>* control_characters; // 0x108
		::Il2CppArray<::System::Object*>* _consoleColorToAnsiCode; // 0x18
		::Il2CppArray<::System::Object*>* echobuf; // 0x110
		::System::Int32 echon; // 0x118

		::System::String* TryTermInfoDir(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_TRYTERMINFODIR_OFFSET))(str, str, nullptr);
		}

		::System::String* SearchTerminfo(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_SEARCHTERMINFO_OFFSET))(str, nullptr);
		}

		::System::Void WriteConsole(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_WRITECONSOLE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean get_Initialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_GET_INITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_INIT_OFFSET))(nullptr);
		}

		::System::Void IncrementX()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_INCREMENTX_OFFSET))(nullptr);
		}

		::System::Void WriteSpecialKey(::System::ConsoleKeyInfo* arg)
		{
			((::System::Void(*)(::System::ConsoleKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSpecialKey(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_WRITESPECIALKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSpecialKey(::System::ConsoleKeyInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::ConsoleKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ISSPECIALKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSpecialKey(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ISSPECIALKEY_OFFSET))(arg, nullptr);
		}

		::System::Void GetCursorPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_GETCURSORPOSITION_OFFSET))(nullptr);
		}

		::System::Void CheckWindowDimensions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_CHECKWINDOWDIMENSIONS_OFFSET))(nullptr);
		}

		::System::Int32 get_WindowHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_GET_WINDOWHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_WindowWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_GET_WINDOWWIDTH_OFFSET))(nullptr);
		}

		::System::Void AddToBuffer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ADDTOBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void AdjustBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ADJUSTBUFFER_OFFSET))(nullptr);
		}

		::System::ConsoleKeyInfo* CreateKeyInfoFromInt(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::ConsoleKeyInfo*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_CREATEKEYINFOFROMINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetKeyFromBuffer(::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_GETKEYFROMBUFFER_OFFSET))(arg, nullptr);
		}

		::System::ConsoleKeyInfo* ReadKeyInternal(bool&* arg)
		{
			return (return (::System::ConsoleKeyInfo*(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READKEYINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean InputPending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_INPUTPENDING_OFFSET))(nullptr);
		}

		::System::Void QueueEcho(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_QUEUEECHO_OFFSET))(arg, nullptr);
		}

		::System::Void Echo(::System::ConsoleKeyInfo* arg)
		{
			((::System::Void(*)(::System::ConsoleKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ECHO_OFFSET))(arg, nullptr);
		}

		::System::Void EchoFlush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ECHOFLUSH_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::ConsoleKeyInfo* ReadKey(::System::Boolean arg)
		{
			return (return (::System::ConsoleKeyInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READKEY_OFFSET))(arg, nullptr);
		}

		::System::String* ReadLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READLINE_OFFSET))(nullptr);
		}

		::System::String* ReadToEnd()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READTOEND_OFFSET))(nullptr);
		}

		::System::String* ReadUntilConditionInternal(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_READUNTILCONDITIONINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetCursorPosition(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_SETCURSORPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateKeyMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_CREATEKEYMAP_OFFSET))(nullptr);
		}

		::System::Void InitKeys()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_INITKEYS_OFFSET))(nullptr);
		}

		::System::Void AddStringMapping(::System::TermInfoStrings* arg)
		{
			((::System::Void(*)(::System::TermInfoStrings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_ADDSTRINGMAPPING_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFODRIVER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

