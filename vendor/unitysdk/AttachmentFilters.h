#pragma once
#include "unitysdk.h"

class AttachmentFilterEmblemOwned;
class AttachmentFilterEmblemCategory;
class AttachmentFilterEmblemFavorRank;
class AttachmentFilterEmblemSchool;
class AttachmentFilters;

#define ATTACHMENTFILTERS_SET_EMBLEMFAVORRANKFILTER_OFFSET UNITYSDK_OFFSET(0x1FB3240)
#define ATTACHMENTFILTERS_GET_EMBLEMCATEGORYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB3250)
#define ATTACHMENTFILTERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB3260)
#define ATTACHMENTFILTERS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB3270)
#define ATTACHMENTFILTERS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1FB3510)
#define ATTACHMENTFILTERS_EMBLEMFILTERON_OFFSET UNITYSDK_OFFSET(0x1FB3560)
#define ATTACHMENTFILTERS_SET_EMBLEMOWNEDFILTER_OFFSET UNITYSDK_OFFSET(0x1FB3630)
#define ATTACHMENTFILTERS_GET_EMBLEMOWNEDFILTER_OFFSET UNITYSDK_OFFSET(0x1FB3640)
#define ATTACHMENTFILTERS_GET_EMBLEMSCHOOLFILTER_OFFSET UNITYSDK_OFFSET(0x1FB3650)
#define ATTACHMENTFILTERS_LOADEMBLEMFILTER_OFFSET UNITYSDK_OFFSET(0x1FB3660)
#define ATTACHMENTFILTERS_RESETEMBLEMFILTER_OFFSET UNITYSDK_OFFSET(0x1FB37E0)
#define ATTACHMENTFILTERS_RESTOREEMBLEMFILTER_OFFSET UNITYSDK_OFFSET(0x1FB3890)
#define ATTACHMENTFILTERS_GET_EMBLEMFAVORRANKFILTER_OFFSET UNITYSDK_OFFSET(0x1FB3940)
#define ATTACHMENTFILTERS_SET_EMBLEMSCHOOLFILTER_OFFSET UNITYSDK_OFFSET(0x1FB3950)
#define ATTACHMENTFILTERS_SAVEEMBLEMFILTER_OFFSET UNITYSDK_OFFSET(0x1FB3960)
#define ATTACHMENTFILTERS_SET_EMBLEMCATEGORYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB3C50)

	inline static constexpr unsigned int AttachmentFilters_TypeDefinitionIndex = 2908;

	class AttachmentFilters : public Il2CppObject
	{
	public:
		AttachmentFilterEmblemOwned* _EmblemOwnedFilter_k__BackingField; // 0x10
		AttachmentFilterEmblemCategory* _EmblemCategoryFilter_k__BackingField; // 0x18
		AttachmentFilterEmblemFavorRank* _EmblemFavorRankFilter_k__BackingField; // 0x20
		AttachmentFilterEmblemSchool* _EmblemSchoolFilter_k__BackingField; // 0x28

		::System::Void set_EmblemFavorRankFilter(AttachmentFilterEmblemFavorRank* arg)
		{
			((::System::Void(*)(AttachmentFilterEmblemFavorRank*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_SET_EMBLEMFAVORRANKFILTER_OFFSET))(arg, nullptr);
		}

		AttachmentFilterEmblemCategory* get_EmblemCategoryFilter()
		{
			return ((AttachmentFilterEmblemCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_GET_EMBLEMCATEGORYFILTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_INITIALIZE_OFFSET))(nullptr);
		}

		AttachmentFilters* get_Instance()
		{
			return ((AttachmentFilters*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Boolean EmblemFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_EMBLEMFILTERON_OFFSET))(nullptr);
		}

		::System::Void set_EmblemOwnedFilter(AttachmentFilterEmblemOwned* arg)
		{
			((::System::Void(*)(AttachmentFilterEmblemOwned*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_SET_EMBLEMOWNEDFILTER_OFFSET))(arg, nullptr);
		}

		AttachmentFilterEmblemOwned* get_EmblemOwnedFilter()
		{
			return ((AttachmentFilterEmblemOwned*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_GET_EMBLEMOWNEDFILTER_OFFSET))(nullptr);
		}

		AttachmentFilterEmblemSchool* get_EmblemSchoolFilter()
		{
			return ((AttachmentFilterEmblemSchool*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_GET_EMBLEMSCHOOLFILTER_OFFSET))(nullptr);
		}

		::System::Void LoadEmblemFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_LOADEMBLEMFILTER_OFFSET))(nullptr);
		}

		::System::Void ResetEmblemFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_RESETEMBLEMFILTER_OFFSET))(nullptr);
		}

		::System::Void RestoreEmblemFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_RESTOREEMBLEMFILTER_OFFSET))(nullptr);
		}

		AttachmentFilterEmblemFavorRank* get_EmblemFavorRankFilter()
		{
			return ((AttachmentFilterEmblemFavorRank*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_GET_EMBLEMFAVORRANKFILTER_OFFSET))(nullptr);
		}

		::System::Void set_EmblemSchoolFilter(AttachmentFilterEmblemSchool* arg)
		{
			((::System::Void(*)(AttachmentFilterEmblemSchool*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_SET_EMBLEMSCHOOLFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void SaveEmblemFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_SAVEEMBLEMFILTER_OFFSET))(nullptr);
		}

		::System::Void set_EmblemCategoryFilter(AttachmentFilterEmblemCategory* arg)
		{
			((::System::Void(*)(AttachmentFilterEmblemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTERS_SET_EMBLEMCATEGORYFILTER_OFFSET))(arg, nullptr);
		}

	};

