#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UITexture;
class UIDreammaker_ParameterDisplay;
namespace MX::Data { class MiniGameDreamMakerScheduleExcelInfo; }

#define UIDREAMMAKER_SCHEDULEPROGRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0xBA2170)
#define UIDREAMMAKER_SCHEDULEPROGRESS_ONPROGRESSSTART_OFFSET UNITYSDK_OFFSET(0xBA2180)
#define UIDREAMMAKER_SCHEDULEPROGRESS_PLAYRESULTIMAGEANIMATION_OFFSET UNITYSDK_OFFSET(0xBA2200)
#define UIDREAMMAKER_SCHEDULEPROGRESS_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBA2230)
#define UIDREAMMAKER_SCHEDULEPROGRESS_ONPROGRESSFINISH_OFFSET UNITYSDK_OFFSET(0xBA2440)
#define UIDREAMMAKER_SCHEDULEPROGRESS_DREAMMAKERPROGRESSSETDATA_OFFSET UNITYSDK_OFFSET(0xBA2470)

	inline static constexpr unsigned int UIDreammaker_ScheduleProgress_TypeDefinitionIndex = 609;

	class UIDreammaker_ScheduleProgress : public Il2CppObject
	{
	public:
		Il2CppObject* resultTextureList; // 0x138
		::UnityEngine::Animation* resultTextureAnimation; // 0x140
		UITexture* loadingResource01; // 0x148
		UITexture* loadingResource02; // 0x150
		UIDreammaker_ParameterDisplay* parameterDisplay; // 0x158
		::System::String* resultImageFontAnimationName; // 0x160

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SCHEDULEPROGRESS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnProgressStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SCHEDULEPROGRESS_ONPROGRESSSTART_OFFSET))(nullptr);
		}

		::System::Void PlayResultImageAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SCHEDULEPROGRESS_PLAYRESULTIMAGEANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SCHEDULEPROGRESS_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnProgressFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SCHEDULEPROGRESS_ONPROGRESSFINISH_OFFSET))(nullptr);
		}

		::System::Void DreamMakerProgressSetData(::MX::Data::MiniGameDreamMakerScheduleExcelInfo* arg, Il2CppObject* arg2, ::System::Int64 arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::MX::Data::MiniGameDreamMakerScheduleExcelInfo*, Il2CppObject*, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SCHEDULEPROGRESS_DREAMMAKERPROGRESSSETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

