#pragma once
#include "../../unitysdk.h"

namespace FlatData { class VoiceEvent; }
namespace MX::Data::Excel { class VoiceCommonExcel&; }
namespace MX::Data::Excel { class CharacterVoiceExcel&; }
namespace MX::Data::Excel { class VoiceRoomExceptionExcel&; }
namespace MX::Data::Excel { class VoiceExcel&; }
namespace MX::Data::Excel { class VoiceSpineExcel&; }
namespace MX::Data::Excel { class VoiceTimelineExcel&; }

#define MX_DATA_AUDIODATA_GET_SIMPLEVOICEIDCALLNAME_OFFSET UNITYSDK_OFFSET(0x187AA50)
#define MX_DATA_AUDIODATA_SET_SIMPLEVOICEIDCALLNAME_OFFSET UNITYSDK_OFFSET(0x187AAA0)
#define MX_DATA_AUDIODATA_GET_SIMPLEVOICEIDCALLNAME1_OFFSET UNITYSDK_OFFSET(0x187AB10)
#define MX_DATA_AUDIODATA_SET_SIMPLEVOICEIDCALLNAME1_OFFSET UNITYSDK_OFFSET(0x187AB60)
#define MX_DATA_AUDIODATA_GET_SIMPLEVOICEIDCALLNAME2_OFFSET UNITYSDK_OFFSET(0x187ABD0)
#define MX_DATA_AUDIODATA_SET_SIMPLEVOICEIDCALLNAME2_OFFSET UNITYSDK_OFFSET(0x187AC20)
#define MX_DATA_AUDIODATA_GET_SIMPLEVOICEIDCALLNAME1HASH_OFFSET UNITYSDK_OFFSET(0x187AC90)
#define MX_DATA_AUDIODATA_SET_SIMPLEVOICEIDCALLNAME1HASH_OFFSET UNITYSDK_OFFSET(0x187ACE0)
#define MX_DATA_AUDIODATA_GET_SIMPLEVOICEIDCALLNAME2HASH_OFFSET UNITYSDK_OFFSET(0x187AD30)
#define MX_DATA_AUDIODATA_SET_SIMPLEVOICEIDCALLNAME2HASH_OFFSET UNITYSDK_OFFSET(0x187AD80)
#define MX_DATA_AUDIODATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x187ADD0)
#define MX_DATA_AUDIODATA_GETLOGICEFFECTVOICEEXCELSALL_OFFSET UNITYSDK_OFFSET(0x187AF00)
#define MX_DATA_AUDIODATA_GETANISTATEAUDIOTABLE_OFFSET UNITYSDK_OFFSET(0x187AF70)
#define MX_DATA_AUDIODATA_GETANISTATEAUDIOTABLE_OFFSET UNITYSDK_OFFSET(0x187AFE0)
#define MX_DATA_AUDIODATA_GETCOMMONVOICEDICTINARY_OFFSET UNITYSDK_OFFSET(0x187B040)
#define MX_DATA_AUDIODATA_TRYGETCOMMONVOICE_OFFSET UNITYSDK_OFFSET(0x187B1A0)
#define MX_DATA_AUDIODATA_GETCHARACTERVOICEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x187B250)
#define MX_DATA_AUDIODATA_GETCHARACTERVOICELISTFORCV_OFFSET UNITYSDK_OFFSET(0x187B480)
#define MX_DATA_AUDIODATA_TRYGETCHARACTERVOICE_OFFSET UNITYSDK_OFFSET(0x187B4E0)
#define MX_DATA_AUDIODATA_TRYGETVOICEROOMEXCEPTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x187B590)
#define MX_DATA_AUDIODATA_TRYGETSIMPLEVOICE_OFFSET UNITYSDK_OFFSET(0x187B640)
#define MX_DATA_AUDIODATA_GETSIMPLEVOICEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x187B6F0)
#define MX_DATA_AUDIODATA_TRYGETSPINEVOICE_OFFSET UNITYSDK_OFFSET(0x187B840)
#define MX_DATA_AUDIODATA_TRYGETTIMELINEVOICE_OFFSET UNITYSDK_OFFSET(0x187B8F0)
#define MX_DATA_AUDIODATA_GETSOUNDUIPATH_OFFSET UNITYSDK_OFFSET(0x187B9A0)
#define MX_DATA_AUDIODATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x187BA90)
#define MX_DATA_AUDIODATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x187BAA0)

namespace MX::Data
{
	inline static constexpr unsigned int AudioData_TypeDefinitionIndex = 15972;

	class AudioData : public Il2CppObject
	{
	public:
		::System::String* _SimpleVoiceIdCallName_k__BackingField; // 0x0
		::System::String* _SimpleVoiceIdCallName1_k__BackingField; // 0x8
		::System::String* _SimpleVoiceIdCallName2_k__BackingField; // 0x10
		::System::UInt32 _SimpleVoiceIdCallName1Hash_k__BackingField; // 0x18
		::System::UInt32 _SimpleVoiceIdCallName2Hash_k__BackingField; // 0x1C

		::System::String* get_SimpleVoiceIdCallName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_GET_SIMPLEVOICEIDCALLNAME_OFFSET))(nullptr);
		}

		::System::Void set_SimpleVoiceIdCallName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_SET_SIMPLEVOICEIDCALLNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_SimpleVoiceIdCallName1()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_GET_SIMPLEVOICEIDCALLNAME1_OFFSET))(nullptr);
		}

		::System::Void set_SimpleVoiceIdCallName1(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_SET_SIMPLEVOICEIDCALLNAME1_OFFSET))(str, nullptr);
		}

		::System::String* get_SimpleVoiceIdCallName2()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_GET_SIMPLEVOICEIDCALLNAME2_OFFSET))(nullptr);
		}

		::System::Void set_SimpleVoiceIdCallName2(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_SET_SIMPLEVOICEIDCALLNAME2_OFFSET))(str, nullptr);
		}

		::System::UInt32 get_SimpleVoiceIdCallName1Hash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_GET_SIMPLEVOICEIDCALLNAME1HASH_OFFSET))(nullptr);
		}

		::System::Void set_SimpleVoiceIdCallName1Hash(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_SET_SIMPLEVOICEIDCALLNAME1HASH_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_SimpleVoiceIdCallName2Hash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_GET_SIMPLEVOICEIDCALLNAME2HASH_OFFSET))(nullptr);
		}

		::System::Void set_SimpleVoiceIdCallName2Hash(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_SET_SIMPLEVOICEIDCALLNAME2HASH_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetLogicEffectVoiceExcelsAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_GETLOGICEFFECTVOICEEXCELSALL_OFFSET))(nullptr);
		}

		Il2CppObject* GetAniStateAudioTable(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_GETANISTATEAUDIOTABLE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetAniStateAudioTable(::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_GETANISTATEAUDIOTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCommonVoiceDictinary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_GETCOMMONVOICEDICTINARY_OFFSET))(nullptr);
		}

		::System::Boolean TryGetCommonVoice(::FlatData::VoiceEvent* arg, ::MX::Data::Excel::VoiceCommonExcel&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::VoiceEvent*, ::MX::Data::Excel::VoiceCommonExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_TRYGETCOMMONVOICE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCharacterVoiceDictionary(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_GETCHARACTERVOICEDICTIONARY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCharacterVoiceListForCV(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_GETCHARACTERVOICELISTFORCV_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCharacterVoice(::System::Int64 arg, ::System::UInt32 arg, ::MX::Data::Excel::CharacterVoiceExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::UInt32, ::MX::Data::Excel::CharacterVoiceExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_TRYGETCHARACTERVOICE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetVoiceRoomExceptionExcel(::System::Int64 arg, ::MX::Data::Excel::VoiceRoomExceptionExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::VoiceRoomExceptionExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_TRYGETVOICEROOMEXCEPTIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSimpleVoice(::System::UInt32 arg, ::MX::Data::Excel::VoiceExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::MX::Data::Excel::VoiceExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_TRYGETSIMPLEVOICE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetSimpleVoiceDictionary(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_GETSIMPLEVOICEDICTIONARY_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetSpineVoice(::System::UInt32 arg, ::MX::Data::Excel::VoiceSpineExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::MX::Data::Excel::VoiceSpineExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_TRYGETSPINEVOICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetTimelineVoice(::System::UInt32 arg, ::MX::Data::Excel::VoiceTimelineExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::MX::Data::Excel::VoiceTimelineExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_TRYGETTIMELINEVOICE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetSoundUIPath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_GETSOUNDUIPATH_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUDIODATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

