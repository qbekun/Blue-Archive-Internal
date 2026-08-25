#pragma once
#include "unitysdk.h"

class CafeTerrain;
class AddressKeyHolder;
class UICafe;
namespace MX::Data::Excel { class CostumeExcel; }
namespace UnityEngine { class Transform; }
namespace FlatData { class CafeCharacterState; }
class CafeCharacter;

#define CAFECHARACTERLOADER_RELEASE_OFFSET UNITYSDK_OFFSET(0x19B2910)
#define CAFECHARACTERLOADER_GET_ALLCHARACTERLOADED_OFFSET UNITYSDK_OFFSET(0x19B2B60)
#define CAFECHARACTERLOADER_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x19B3390)
#define CAFECHARACTERLOADER_CLEARCHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0x19B2940)
#define CAFECHARACTERLOADER_GET_ATTACHFURNITURECANDIDATES_OFFSET UNITYSDK_OFFSET(0x19B33A0)
#define CAFECHARACTERLOADER_REMOVEOTHERCHARACTERS_OFFSET UNITYSDK_OFFSET(0x19B34E0)
#define CAFECHARACTERLOADER_INITIALIZECHARACTERS_OFFSET UNITYSDK_OFFSET(0x19B3AD0)
#define CAFECHARACTERLOADER_LOADOTHERCHARACTERS_OFFSET UNITYSDK_OFFSET(0x19B3BC0)
#define CAFECHARACTERLOADER_SETBUBBLEORDER_OFFSET UNITYSDK_OFFSET(0x19B46D0)
#define CAFECHARACTERLOADER_GETCHARACTERAVOIDANCEPRIORITY_OFFSET UNITYSDK_OFFSET(0x19B1BC0)
#define CAFECHARACTERLOADER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19B4800)
#define CAFECHARACTERLOADER_ONENDGIVEGIFTPROCESS_OFFSET UNITYSDK_OFFSET(0x19B4880)
#define CAFECHARACTERLOADER_GET_CHARACTERUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x19B2FD0)
#define CAFECHARACTERLOADER_ONSTARTGIVEGIFTPROCESS_OFFSET UNITYSDK_OFFSET(0x19B4A10)
#define CAFECHARACTERLOADER_SHOWCHARACTERSONEDITEND_OFFSET UNITYSDK_OFFSET(0x19B4C50)
#define CAFECHARACTERLOADER_GETCAFECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x19B5050)
#define CAFECHARACTERLOADER_LOADCHARACTERS_OFFSET UNITYSDK_OFFSET(0x19B3B50)
#define CAFECHARACTERLOADER_HIDECHARACTERSONEDITSTART_OFFSET UNITYSDK_OFFSET(0x19B5120)
#define CAFECHARACTERLOADER_ONDEPLOYALLFINISH_OFFSET UNITYSDK_OFFSET(0x19B52A0)
#define CAFECHARACTERLOADER_GETCAMERADISTANCESORTINGDATA_OFFSET UNITYSDK_OFFSET(0x19B5330)
#define CAFECHARACTERLOADER_REFRESHCHARACTERFLOATERDISTANCES_OFFSET UNITYSDK_OFFSET(0x19B5660)
#define CAFECHARACTERLOADER_INTERCEPTCHARACTERPOS_OFFSET UNITYSDK_OFFSET(0x19B5810)
#define CAFECHARACTERLOADER_GETCHARACTERSTATECOUNT_OFFSET UNITYSDK_OFFSET(0x19AF100)
#define CAFECHARACTERLOADER__ONDEPLOYALLFINISH_B__17_0_OFFSET UNITYSDK_OFFSET(0x19B5DE0)
#define CAFECHARACTERLOADER_CREATECHARACTERBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19B5DF0)
#define CAFECHARACTERLOADER_GET_UICAFE_OFFSET UNITYSDK_OFFSET(0x19B3020)
#define CAFECHARACTERLOADER_GETREMOVECANDIDATES_OFFSET UNITYSDK_OFFSET(0x19B38B0)
#define CAFECHARACTERLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x19B60F0)
#define CAFECHARACTERLOADER_GETCHARACTER_OFFSET UNITYSDK_OFFSET(0x19B6160)
#define CAFECHARACTERLOADER_SET_ISREADY_OFFSET UNITYSDK_OFFSET(0x19B61D0)
#define CAFECHARACTERLOADER_ONSUMMONCHARACTER_OFFSET UNITYSDK_OFFSET(0x19B61E0)

	inline static constexpr unsigned int CafeCharacterLoader_TypeDefinitionIndex = 1351;

	class CafeCharacterLoader : public Il2CppObject
	{
	public:
		CafeTerrain* terrain; // 0x18
		AddressKeyHolder* addressKeyHolder; // 0x20
		Il2CppObject* characterTable; // 0x28
		UICafe* _uiCafe; // 0x30
		::System::Boolean _IsReady_k__BackingField; // 0x38

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_RELEASE_OFFSET))(nullptr);
		}

		::System::Boolean get_AllCharacterLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_GET_ALLCHARACTERLOADED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_GET_ISREADY_OFFSET))(nullptr);
		}

		::System::Void ClearCharacterTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_CLEARCHARACTERTABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_AttachFurnitureCandidates()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_GET_ATTACHFURNITURECANDIDATES_OFFSET))(nullptr);
		}

		::System::Void RemoveOtherCharacters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_REMOVEOTHERCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void InitializeCharacters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_INITIALIZECHARACTERS_OFFSET))(nullptr);
		}

		::System::Void LoadOtherCharacters(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_LOADOTHERCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void SetBubbleOrder(::System::Int64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_SETBUBBLEORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetCharacterAvoidancePriority(::System::Int64 arg)
		{
			return ((::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_GETCHARACTERAVOIDANCEPRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEndGiveGiftProcess(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_ONENDGIVEGIFTPROCESS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CharacterUniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_GET_CHARACTERUNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void OnStartGiveGiftProcess(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_ONSTARTGIVEGIFTPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void ShowCharactersOnEditEnd(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_SHOWCHARACTERSONEDITEND_OFFSET))(arg, nullptr);
		}

		::System::String* GetCafeCharacterName(::MX::Data::Excel::CostumeExcel* arg)
		{
			return ((::System::String*(*)(::MX::Data::Excel::CostumeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_GETCAFECHARACTERNAME_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* LoadCharacters()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_LOADCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void HideCharactersOnEditStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_HIDECHARACTERSONEDITSTART_OFFSET))(nullptr);
		}

		::System::Void OnDeployAllFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_ONDEPLOYALLFINISH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCameraDistanceSortingData()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_GETCAMERADISTANCESORTINGDATA_OFFSET))(nullptr);
		}

		::System::Void RefreshCharacterFloaterDistances()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_REFRESHCHARACTERFLOATERDISTANCES_OFFSET))(nullptr);
		}

		::System::Boolean InterceptCharacterPos(::System::Int64 arg, ::UnityEngine::Transform* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_INTERCEPTCHARACTERPOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetCharacterStateCount(::FlatData::CafeCharacterState* arg)
		{
			return ((::System::Int32(*)(::FlatData::CafeCharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_GETCHARACTERSTATECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void _OnDeployAllFinish_b__17_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER__ONDEPLOYALLFINISH_B__17_0_OFFSET))(nullptr);
		}

		::System::Void CreateCharacterByUniqueId(::System::Int64 arg, ::System::DateTime* arg2, ::System::Boolean arg3, Il2CppObject* arg4, ::System::Action* arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::DateTime*, ::System::Boolean, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_CREATECHARACTERBYUNIQUEID_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		UICafe* get_UICafe()
		{
			return ((UICafe*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_GET_UICAFE_OFFSET))(nullptr);
		}

		Il2CppObject* GetRemoveCandidates()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_GETREMOVECANDIDATES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_.CTOR_OFFSET))(nullptr);
		}

		CafeCharacter* GetCharacter(::System::Int64 arg)
		{
			return ((CafeCharacter*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_GETCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsReady(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_SET_ISREADY_OFFSET))(arg, nullptr);
		}

		::System::Void OnSummonCharacter(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERLOADER_ONSUMMONCHARACTER_OFFSET))(arg, nullptr);
		}

	};

