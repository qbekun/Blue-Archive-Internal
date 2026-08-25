#pragma once
#include "../../../unitysdk.h"

namespace Mono::Xml { class SmallXmlParser; }

#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C4DA0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_VALIDATEPATH_OFFSET UNITYSDK_OFFSET(0x91C8E30)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_CHECKPATH_OFFSET UNITYSDK_OFFSET(0x91C8F10)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONSTARTPARSING_OFFSET UNITYSDK_OFFSET(0x91C9020)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x91C9030)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONIGNORABLEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x91C9040)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x91C9050)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_PARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x91C9230)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONENDELEMENT_OFFSET UNITYSDK_OFFSET(0x91CBE80)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCUSTOMPROVIDERDATA_OFFSET UNITYSDK_OFFSET(0x91CA2E0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READLIFETINE_OFFSET UNITYSDK_OFFSET(0x91CA680)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_PARSETIME_OFFSET UNITYSDK_OFFSET(0x91CBF20)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCHANNEL_OFFSET UNITYSDK_OFFSET(0x91CAC70)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READPROVIDER_OFFSET UNITYSDK_OFFSET(0x91CB170)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCLIENTACTIVATED_OFFSET UNITYSDK_OFFSET(0x91CB890)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READSERVICEACTIVATED_OFFSET UNITYSDK_OFFSET(0x91CB9D0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCLIENTWELLKNOWN_OFFSET UNITYSDK_OFFSET(0x91CB5F0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READSERVICEWELLKNOWN_OFFSET UNITYSDK_OFFSET(0x91CB6D0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READINTEROPXML_OFFSET UNITYSDK_OFFSET(0x91CBA80)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READPRELOAD_OFFSET UNITYSDK_OFFSET(0x91CBC10)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_GETNOTNULL_OFFSET UNITYSDK_OFFSET(0x91CC510)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_EXTRACTASSEMBLY_OFFSET UNITYSDK_OFFSET(0x91CC640)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONCHARS_OFFSET UNITYSDK_OFFSET(0x91CD150)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONENDPARSING_OFFSET UNITYSDK_OFFSET(0x91CD160)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ConfigHandler_TypeDefinitionIndex = 24440;

	class ConfigHandler : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* typeEntries; // 0x10
		::System::Collections::ArrayList* channelInstances; // 0x18
		::System::Runtime::Remoting::ChannelData* currentChannel; // 0x20
		::System::Collections::Stack* currentProviderData; // 0x28
		::System::String* currentClientUrl; // 0x30
		::System::String* appName; // 0x38
		::System::String* currentXmlPath; // 0x40
		::System::Boolean onlyDelayedChannels; // 0x48

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ValidatePath(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_VALIDATEPATH_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean CheckPath(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_CHECKPATH_OFFSET))(str, nullptr);
		}

		::System::Void OnStartParsing(::Mono::Xml::SmallXmlParser* arg)
		{
			((::System::Void(*)(::Mono::Xml::SmallXmlParser*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONSTARTPARSING_OFFSET))(arg, nullptr);
		}

		::System::Void OnProcessingInstruction(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::System::Void OnIgnorableWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONIGNORABLEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void OnStartElement(::System::String* str, IAttrList* arg)
		{
			((::System::Void(*)(::System::String*, IAttrList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONSTARTELEMENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void ParseElement(::System::String* str, IAttrList* arg)
		{
			((::System::Void(*)(::System::String*, IAttrList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_PARSEELEMENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void OnEndElement(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONENDELEMENT_OFFSET))(str, nullptr);
		}

		::System::Void ReadCustomProviderData(::System::String* str, IAttrList* arg)
		{
			((::System::Void(*)(::System::String*, IAttrList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCUSTOMPROVIDERDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Void ReadLifetine(IAttrList* arg)
		{
			((::System::Void(*)(IAttrList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READLIFETINE_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* ParseTime(::System::String* str)
		{
			return (return (::System::TimeSpan*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_PARSETIME_OFFSET))(str, nullptr);
		}

		::System::Void ReadChannel(IAttrList* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(IAttrList*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCHANNEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::ProviderData* ReadProvider(::System::String* str, IAttrList* arg, ::System::Boolean arg)
		{
			return (return (::System::Runtime::Remoting::ProviderData*(*)(::System::String*, IAttrList*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READPROVIDER_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ReadClientActivated(IAttrList* arg)
		{
			((::System::Void(*)(IAttrList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCLIENTACTIVATED_OFFSET))(arg, nullptr);
		}

		::System::Void ReadServiceActivated(IAttrList* arg)
		{
			((::System::Void(*)(IAttrList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READSERVICEACTIVATED_OFFSET))(arg, nullptr);
		}

		::System::Void ReadClientWellKnown(IAttrList* arg)
		{
			((::System::Void(*)(IAttrList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCLIENTWELLKNOWN_OFFSET))(arg, nullptr);
		}

		::System::Void ReadServiceWellKnown(IAttrList* arg)
		{
			((::System::Void(*)(IAttrList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READSERVICEWELLKNOWN_OFFSET))(arg, nullptr);
		}

		::System::Void ReadInteropXml(IAttrList* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(IAttrList*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READINTEROPXML_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadPreload(IAttrList* arg)
		{
			((::System::Void(*)(IAttrList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READPRELOAD_OFFSET))(arg, nullptr);
		}

		::System::String* GetNotNull(IAttrList* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(IAttrList*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_GETNOTNULL_OFFSET))(arg, str, nullptr);
		}

		::System::String* ExtractAssembly(::System::String&* arg)
		{
			return (return (::System::String*(*)(::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_EXTRACTASSEMBLY_OFFSET))(arg, nullptr);
		}

		::System::Void OnChars(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONCHARS_OFFSET))(str, nullptr);
		}

		::System::Void OnEndParsing(::Mono::Xml::SmallXmlParser* arg)
		{
			((::System::Void(*)(::Mono::Xml::SmallXmlParser*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONENDPARSING_OFFSET))(arg, nullptr);
		}

	};
}

