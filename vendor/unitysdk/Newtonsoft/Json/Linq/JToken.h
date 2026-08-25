#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class JTokenEqualityComparer; }
namespace Newtonsoft::Json::Linq { class JContainer; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace Newtonsoft::Json::Linq { class JsonCloneSettings; }
namespace Newtonsoft::Json::Linq { class JTokenType; }
namespace Newtonsoft::Json { class Formatting; }
namespace Newtonsoft::Json::Linq { class JValue; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class IJsonLineInfo; }
namespace Newtonsoft::Json::Linq { class JsonSelectSettings; }

#define NEWTONSOFT_JSON_LINQ_JTOKEN_WRITETOASYNC_OFFSET UNITYSDK_OFFSET(0x950AFD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_WRITETOASYNC_OFFSET UNITYSDK_OFFSET(0x950B020)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_READFROMASYNC_OFFSET UNITYSDK_OFFSET(0x950B050)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_READFROMASYNC_OFFSET UNITYSDK_OFFSET(0x950B0A0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x950B200)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x950B2B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x94FFA10)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x950B310)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x950B320)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x94FC2F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_HASVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x950B330)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x950B370)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x950B380)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x950B390)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x950B3A0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PATH_OFFSET UNITYSDK_OFFSET(0x950B3B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x94FB500)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ADDAFTERSELF_OFFSET UNITYSDK_OFFSET(0x950B750)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ADDBEFORESELF_OFFSET UNITYSDK_OFFSET(0x950B800)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ANCESTORS_OFFSET UNITYSDK_OFFSET(0x950B8B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ANCESTORSANDSELF_OFFSET UNITYSDK_OFFSET(0x950B9B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GETANCESTORS_OFFSET UNITYSDK_OFFSET(0x950B930)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_AFTERSELF_OFFSET UNITYSDK_OFFSET(0x950BA60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_BEFORESELF_OFFSET UNITYSDK_OFFSET(0x950BB10)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x950BBC0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x950BC60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x950BD00)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_LAST_OFFSET UNITYSDK_OFFSET(0x950BDA0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_CHILDREN_OFFSET UNITYSDK_OFFSET(0x950BE40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_CHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_VALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVE_OFFSET UNITYSDK_OFFSET(0x95045B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_REPLACE_OFFSET UNITYSDK_OFFSET(0x94FEF30)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x950BE90)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x950BF40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ENSUREVALUE_OFFSET UNITYSDK_OFFSET(0x950C190)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GETTYPE_OFFSET UNITYSDK_OFFSET(0x950C2C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_VALIDATETOKEN_OFFSET UNITYSDK_OFFSET(0x950C3A0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950C450)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950C700)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950C9E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950CCD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950CF60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950D230)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950D5B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950D8D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950DBA0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950DE70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950E100)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950E390)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950E620)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950E8B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950EB40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950EDD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950F0B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950F380)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950F650)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950F920)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950FBF0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x950FE70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9510140)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9510420)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x95106B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9510990)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9510C60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9510EF0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9511180)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9511490)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9511720)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x95119B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9511C60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9511F10)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9512260)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x95124F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x95127C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x9512A60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOBIGINTEGERNULLABLE_OFFSET UNITYSDK_OFFSET(0x9512C50)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9512EC0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9512F20)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9512F90)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9512FF0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513070)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x95130D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513150)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x95131D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513230)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x95132B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513340)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x95133D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513450)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x95134B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513510)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513570)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x95135F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513650)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x95136D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513750)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x95137C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513840)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x95138C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513940)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x95139C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513A20)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513A80)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513AE0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513B40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513BA0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513C00)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513C60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513CC0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513D40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9513DB0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9513E40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_NEWTONSOFT.JSON.LINQ.JTOKEN_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9513ED0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT.JSON.LINQ.IJENUMERABLE_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9513F50)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x9513F70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9503E60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x9513FD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x9514030)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x9514080)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x9514D10)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_OFFSET UNITYSDK_OFFSET(0x9514FB0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_OFFSET UNITYSDK_OFFSET(0x9515000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_PARSE_OFFSET UNITYSDK_OFFSET(0x95152D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_PARSE_OFFSET UNITYSDK_OFFSET(0x9515320)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_LOAD_OFFSET UNITYSDK_OFFSET(0x9515560)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_LOAD_OFFSET UNITYSDK_OFFSET(0x95155B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x94F9F70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x9515660)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT.JSON.IJSONLINEINFO.HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x95159D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT.JSON.IJSONLINEINFO.GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x9515A20)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT.JSON.IJSONLINEINFO.GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x9515A70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKEN_OFFSET UNITYSDK_OFFSET(0x9515AC0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKEN_OFFSET UNITYSDK_OFFSET(0x9515E70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKEN_OFFSET UNITYSDK_OFFSET(0x9515AD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKENS_OFFSET UNITYSDK_OFFSET(0x9515EF0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKENS_OFFSET UNITYSDK_OFFSET(0x9515FF0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKENS_OFFSET UNITYSDK_OFFSET(0x9515F70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GETMETAOBJECT_OFFSET UNITYSDK_OFFSET(0x95160C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM.DYNAMIC.IDYNAMICMETAOBJECTPROVIDER.GETMETAOBJECT_OFFSET UNITYSDK_OFFSET(0x9516180)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x95161A0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0x95161C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0x95161E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x9515700)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ANNOTATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ANNOTATION_OFFSET UNITYSDK_OFFSET(0x9516200)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ANNOTATIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ANNOTATIONS_OFFSET UNITYSDK_OFFSET(0x9516370)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVEANNOTATIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVEANNOTATIONS_OFFSET UNITYSDK_OFFSET(0x9516430)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_COPYANNOTATIONS_OFFSET UNITYSDK_OFFSET(0x94FB510)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9516660)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JToken_TypeDefinitionIndex = 32049;

	class JToken : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Linq::JTokenEqualityComparer* _equalityComparer; // 0x0
		::Newtonsoft::Json::Linq::JContainer* _parent; // 0x10
		::Newtonsoft::Json::Linq::JToken* _previous; // 0x18
		::Newtonsoft::Json::Linq::JToken* _next; // 0x20
		::System::Object* _annotations; // 0x28
		::Il2CppArray<::System::Object*>* BooleanTypes; // 0x8
		::Il2CppArray<::System::Object*>* NumberTypes; // 0x10
		::Il2CppArray<::System::Object*>* BigIntegerTypes; // 0x18
		::Il2CppArray<::System::Object*>* StringTypes; // 0x20
		::Il2CppArray<::System::Object*>* GuidTypes; // 0x28
		::Il2CppArray<::System::Object*>* TimeSpanTypes; // 0x30
		::Il2CppArray<::System::Object*>* UriTypes; // 0x38
		::Il2CppArray<::System::Object*>* CharTypes; // 0x40
		::Il2CppArray<::System::Object*>* DateTimeTypes; // 0x48
		::Il2CppArray<::System::Object*>* BytesTypes; // 0x50

		::System::Threading::Tasks::Task* WriteToAsync(::Newtonsoft::Json::JsonWriter* arg, ::System::Threading::CancellationToken* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonWriter*, ::System::Threading::CancellationToken*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_WRITETOASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteToAsync(::Newtonsoft::Json::JsonWriter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_WRITETOASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadFromAsync(::Newtonsoft::Json::JsonReader* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_READFROMASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadFromAsync(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_READFROMASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAsync(::Newtonsoft::Json::JsonReader* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_LOADASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadAsync(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_LOADASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JTokenEqualityComparer* get_EqualityComparer()
		{
			return (return (::Newtonsoft::Json::Linq::JTokenEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_EQUALITYCOMPARER_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JContainer* get_Parent()
		{
			return (return (::Newtonsoft::Json::Linq::JContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void set_Parent(::Newtonsoft::Json::Linq::JContainer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JContainer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PARENT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Root()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ROOT_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::Linq::JsonCloneSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_CLONETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPEQUALS_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JTokenType* get_Type()
		{
			return (return (::Newtonsoft::Json::Linq::JTokenType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasValues()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_HASVALUES_OFFSET))(nullptr);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPEQUALS_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Next()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_NEXT_OFFSET))(nullptr);
		}

		::System::Void set_Next(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_NEXT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Previous()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PREVIOUS_OFFSET))(nullptr);
		}

		::System::Void set_Previous(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PREVIOUS_OFFSET))(arg, nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddAfterSelf(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ADDAFTERSELF_OFFSET))(arg, nullptr);
		}

		::System::Void AddBeforeSelf(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ADDBEFORESELF_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Ancestors()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ANCESTORS_OFFSET))(nullptr);
		}

		Il2CppObject* AncestorsAndSelf()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ANCESTORSANDSELF_OFFSET))(nullptr);
		}

		Il2CppObject* GetAncestors(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GETANCESTORS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AfterSelf()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_AFTERSELF_OFFSET))(nullptr);
		}

		Il2CppObject* BeforeSelf()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_BEFORESELF_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Object* arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Value(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_VALUE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_First()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_FIRST_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Last()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_LAST_OFFSET))(nullptr);
		}

		Il2CppObject* Children()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_CHILDREN_OFFSET))(nullptr);
		}

		Il2CppObject* Children()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_CHILDREN_OFFSET))(nullptr);
		}

		Il2CppObject* Values()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_VALUES_OFFSET))(nullptr);
		}

		::System::Void Remove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVE_OFFSET))(nullptr);
		}

		::System::Void Replace(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_REPLACE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_WRITETO_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::Newtonsoft::Json::Formatting* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::Formatting*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JValue* EnsureValue(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JValue*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ENSUREVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* GetType(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateToken(::Newtonsoft::Json::Linq::JToken* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_VALIDATETOKEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::DateTimeOffset* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::DateTimeOffset*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int64 op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Int64(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int16 op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Int16(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::UInt16 op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::UInt16(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Char op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Char(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Byte op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Byte(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::SByte op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::SByte(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::DateTime* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::DateTime*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Decimal* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Decimal*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Double op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Double(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Single op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Single(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::UInt32(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::UInt64 op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::UInt64(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Guid* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Guid*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::TimeSpan*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Uri* op_Explicit(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Uri*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Numerics::BigInteger* ToBigInteger(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Numerics::BigInteger*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOBIGINTEGER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ToBigIntegerNullable(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOBIGINTEGERNULLABLE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::Boolean arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::DateTimeOffset* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::DateTimeOffset*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::Byte arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::SByte arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::Int64 arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::Int16 arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::UInt16 arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::Int32 arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::DateTime* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::Decimal* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::Double arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::Single arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::UInt32 arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::UInt64 arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::Uri* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::TimeSpan* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::Guid* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_Newtonsoft.Json.Linq.JToken_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_NEWTONSOFT.JSON.LINQ.JTOKEN_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 GetDeepHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GETDEEPHASHCODE_OFFSET))(nullptr);
		}

		Il2CppObject* Newtonsoft.Json.Linq.IJEnumerable_Newtonsoft.Json.Linq.JToken_.get_Item(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT.JSON.LINQ.IJENUMERABLE_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonReader* CreateReader()
		{
			return (return (::Newtonsoft::Json::JsonReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_CREATEREADER_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* FromObjectInternal(::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECTINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* FromObject(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* FromObject(::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ToObject()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_OFFSET))(nullptr);
		}

		::System::Object* ToObject(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ToObject(::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Object* ToObject(::System::Type* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* ReadFrom(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* ReadFrom(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* Parse(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_PARSE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* Parse(::System::String* str, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::String*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_PARSE_OFFSET))(str, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* Load(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_LOAD_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* Load(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Void SetLineInfo(::Newtonsoft::Json::IJsonLineInfo* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::IJsonLineInfo*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLineInfo(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT.JSON.IJSONLINEINFO.HASLINEINFO_OFFSET))(nullptr);
		}

		::System::Int32 Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT.JSON.IJSONLINEINFO.GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT.JSON.IJSONLINEINFO.GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* SelectToken(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKEN_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* SelectToken(::System::String* str, ::System::Boolean arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKEN_OFFSET))(str, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* SelectToken(::System::String* str, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::String*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKEN_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* SelectTokens(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKENS_OFFSET))(str, nullptr);
		}

		Il2CppObject* SelectTokens(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKENS_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* SelectTokens(::System::String* str, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKENS_OFFSET))(str, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* GetMetaObject(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GETMETAOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* System.Dynamic.IDynamicMetaObjectProvider.GetMetaObject(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM.DYNAMIC.IDYNAMICMETAOBJECTPROVIDER.GETMETAOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* DeepClone()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPCLONE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* DeepClone(::Newtonsoft::Json::Linq::JsonCloneSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::Linq::JsonCloneSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPCLONE_OFFSET))(arg, nullptr);
		}

		::System::Void AddAnnotation(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ADDANNOTATION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Annotation()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ANNOTATION_OFFSET))(nullptr);
		}

		::System::Object* Annotation(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ANNOTATION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Annotations()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ANNOTATIONS_OFFSET))(nullptr);
		}

		Il2CppObject* Annotations(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ANNOTATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAnnotations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVEANNOTATIONS_OFFSET))(nullptr);
		}

		::System::Void RemoveAnnotations(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVEANNOTATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyAnnotations(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_COPYANNOTATIONS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

